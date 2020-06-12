#include "FUNCTION.H"

bool CFE_Patch_Can_Enter_Override(const ObjectClass& object)
{
	if (ActiveCFEPatchConfig.EnableRepairQueue && object.What_Am_I() == RTTI_BUILDING) {
		const StructType buildingType = static_cast<const BuildingClass&>(object);
		return buildingType == STRUCT_REPAIR;
	}
	return false;
}

//Disable A10s in missions if the player has no buildings
bool CFE_Patch_A10_Override(const ObjectTypeClass& object, const HousesType house)
{
	if (ActiveCFEPatchConfig.DisableCommandoAirstrikes
		&& GameToPlay == GAME_NORMAL
		&& house != PlayerPtr->Class->House
		&& object.What_Am_I() == RTTI_AIRCRAFTTYPE
		&& ((const AircraftTypeClass&)(object)).Type == AIRCRAFT_A10)
	{
		return CFE_Patch_House_Has_Any_Buildings_In_Map(*PlayerPtr);
	}
	return true;
}

bool CFE_Patch_House_Has_Any_Buildings_In_Map(HouseClass& house)
{
	if (house.ActiveBScan)
	{
		/*cfehunter 12/06/2020
		*Certain missions give you buildings that are owned by you, but not yet discovered
		*We need to account for this here.
		*/
		if (house.IsHuman && GameToPlay == GAME_NORMAL)
		{
			for (const void* rawBuilding : Buildings.ActivePointers)
			{
				const BuildingClass& building = *reinterpret_cast<const BuildingClass*>(rawBuilding);
				if (building.House == &house && building.Is_Discovered_By_Player(&house))
					return true;
			}
		}
		else return true;
	}
	return false;
}