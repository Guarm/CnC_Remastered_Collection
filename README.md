# CFE Patch Redux for CnC_Remastered_Collection
------------------
This mod updates the original CFE Patch mod by cfehunter and its RA port by Root-Core to the official 9/24/2020 hotfix patch (supposedly the final official patch) and adds new features.

The current version is 1.6.

Version 1.6 for Tiberian Dawn is running very far ahead of Red Alert in terms of features. Version 1.6 introduces a lot of new and improved features that will take considerable time to port to RA. Rather than make people wait until that's done, version 1.6 is being released without feature parity. Getting back to feature parity is planned for 1.7.

The Tiberian Dawn mod is available on Steam Workshop here: [link](https://steamcommunity.com/sharedfiles/filedetails/?id=2239875646)

The Red Alert mod is available on Steam Workshop here: [link](https://steamcommunity.com/sharedfiles/filedetails/?id=2268301299)

If you don't have Steam (or Steam is misbehaving), you can download the mod directly from Github here: [link](https://github.com/ChthonVII/CnC_Remastered_Collection/releases).

# Features
------------------
All features can be controlled via the INI file located at "My Documents\\CnCRemastered\\Mods\\Tiberian\_Dawn\\CFEPatchRedux\\CFEPATCHREDUX.INI" or "My Documents\\CnCRemastered\\Mods\\Red\_Alert\\CFEPatchRedux\\CFEPATCHREDUX_RA.INI". See the [settings chart on the wiki](https://github.com/ChthonVII/CnC_Remastered_Collection/wiki/Features-and-INI-Settings-Charts) for details.

- A* Pathing -- Units use the superior A* pathfinding algorithm instead of CnC's default "crash and turn" algorithm.
- Infantry Tiberium Aversion (TD only) --  Infantry (except chem soldiers) will avoid walking through tiberium if a reasonable detour is available. Requires A* Pathing to be enabled.
- Suspend Building Repairs -- Building repairs are suspended, rather than canceled entirely, for insufficient funds.
- Rally Points -- Rally points can be set for unit-producing buildings. Click to set a rally point at a location. Use \[Alt\]+Click to set a rally point on a unit or building.
- Harvester Queue Jumping -- Harvesters will cut in line rather than waiting when they are closer to the refinery than the other harvester. (Can be enabled/disabled independently of Harvester Load Balancing or Harvester Optimization and works in tandem with either, or with the vanilla harvester behavior.)
- Harvester Load Balancing -- Restores the "load balancing" refinery selection behavior added in the official Sept. 16 patch, and removed in the official Sept. 24 hotfix patch. (If both Harvester Load Balancing and Harvester Optimization are enabled, Harvester Load Balancing will be automatically disabled. Harvester Optimization is strongly recommended as the superior choice.)
- Harvester Optimization -- Harvesters will select the nearest refinery, while pretending that the distance to each refinery is increased for each other harvester already bound for that refinery. Results in good load balancing, but without harvesters driving to very distant refineries. See the Settings Chart for further details. (If both Harvester Load Balancing and Harvester Optimization are enabled, Harvester Load Balancing will be automatically disabled. Harvester Optimization is strongly recommended as the superior choice.)
- Harvester Self-Repair (TD only) -- Harvesters will slowly regain hp up to 50%.
- Disable Commando Airstrikes (TD only) -- Prevents the computer from using airstrikes until the player has a base.
- Commando/Tanya Guard -- Commandos/Tanya will attack infantry while in guard mode.
- Safe Sabotage -- Buildings destroyed with C4 never spawn surviving infantry.
- Instant Capture (RA only) -- Engineers always capture buildings, regardless of the building's health.
- Attack-Move -- Use \[Shift\]+Click to issue an attack-move order. Units will move to the destination while stopping to fight foes encountered along their path. Aircraft will return to base after running out of ammo or reaching the destination. Boats (except the normal submarine) will attack briefly, then resume movement. Surface boats will not alter course to chase their targets. (Attack-move code was entirely rewritten in v1.4.)
- Smarter Aircraft -- Three aircraft AI tweaks: (1) Aircraft given an attack or attack-move order will ignore the order if they have no ammo. (2) Purchased aircraft that fly in from off-map will fly in on same Y coordinate as main helipad. (Added in v1.5.) (3) Helicopters periodically check if their target has moved and adjust their flightpath accordingly. (Added in v1.5.)
- Smarter SAMs (TD only) -- SAM sites that lose their target while they still have ammo will briefly scan for a new target before retracting underground. The number of missiles a SAM site can fire before needing to retract underground to reload and the delay after every second shot are adjustable in the INI.
- Configurable Build Distance -- Controls the maximum allowable gap between buildings, allowing a TD-style no-space, or an RA-style 1-space, or larger gaps if you like.
- Tiberium/Ore Growth Scale -- Applies a multiplier to tiberium/ore growth rate.
- TS/RA2-style Wall Building -- Automatically builds wall pieces in the intervening spaces when a wall piece is constructed in line with a nearby piece of the same type. Hold \[Ctrl\] when placing a wall piece to disable this behavior. (Reworked for TD in v1.6. As of v1.6 in TD: It is now possible to build walls in a straight line from walls of the same type that you own up to the full wall build length. Building buildings from walls ("sandbagging") is disallowed whenever the wall build length exceeds the building gap.)
- Inverse Wall Placement Preview (TD only for now) -- When wall placement is pending, displays markers indicating how far existing walls can be extended. (This feature is intended to compensate for the fact that it is impossible to adapt the TS-style wall placement preview to LAN multiplayer.)
- Configurable Silo/Refinery Capacity (RA only) -- Increases (or decreases) the amount of ore silos and refineries can hold.
- Better Tiberium/Ore Growth -- Replaces the vanilla tiberium/ore grow/spread algorithm with one that maintains (almost) the same default growth rate but is unbiased, more granular, and more randomized. The growth rate is slightly higher than vanilla because failed spreads fall back into grows when possible. For added flavor, under certain circumstances, TD tiberium trees  surrounded by fully grown tiberium have a small chance to spawn a visceroid, and RA mine heads and cells of fully grown ore that are surrounded by fully grown ore have a tiny chance to promote to gems. (Also fixes some ore-growth--related bugs in vanilla RA.)
- TS-style Visceroid Spawns (TD only) -- Implements a chance for a visceroid to spawn each time an infantry unit dies from walking through tiberium.
- Meaner Visceroids (TD only) -- Several buffs that make visceroids more threatening.
- Veterancy (TD only for now) -- Units gain experience from combat and receive small buffs upon attaining certain experience levels. See [here](https://github.com/ChthonVII/CnC_Remastered_Collection/wiki/Veterancy-System) for full details.
- Inaccuracy Bugfix (RA only) -- Fixes a vanilla RA bugs that prevented inaccuracy from working as intended. Since this bugfix has a significant impact on gameplay, it's been made optional.


# LAN Multiplayer
------------------
As of version 1.6, the TD version of this mod is fully compatible with LAN multiplayer. The only mod feature that doesn't work perfectly in LAN multiplayer is the visual preview for TS-style wall building. This is an unfixable consequence of the way the GlyphX client/server handles LAN multiplayer. The "Inverse Wall Placement Preview" feature is provided as a substitute of sorts. RA is planned to catch up and achieve full LAN multiplayer compatibility in version 1.7.

# TODO List
------------------
See [wiki](https://github.com/ChthonVII/CnC_Remastered_Collection/wiki/TODO-List).


# Credits
------------------
cfehunter -- original CFE Patch.

As per original CFE Patch notes:

- FluffyQuack -- Assistance with building tile gaps & multi wall improvements.
- A\_\_Gun -- Assistance with building tile gaps.
- Spyyre -- Helping to track down the building placement issue.
- pchote -- Tile drawing in remastered view.
- Butch -- Assistance with attack move polish.

Root-Core -- original RA port of CFE patch.

screaming_chicken -- smarter aircraft fly-in tweak, inspiration for smarter SAMs.

ChthonVII -- Merge official patches since cfehunter and Root-Core abandoned project, harvester refinery selection optimization, infantry tiberium aversion, complete rewrite of attack-move code, better tiberium/ore growth, helicopter flightpath updating, TS-style visceroid spawns, meaner visceroids, veterancy system, TS-style wall building overhaul, LAN multiplayer compatibility overhaul, assorted bugfixes.

Noddynod443 -- LAN multiplayer testing.


# A Reminder About the GPL
------------------
A reminder like this *shouldn't* be necessary. But it appears it is necessary since one of the most popular mods on Steam Workshop has appropriated a lot of GPL code (both from EA and from other modders), and yet its author has ignored at least a dozen public requests for its source code. So let me be clear: You are free to copy my source code and use it in your mod, so long as you do so in accordance with the GPL. That means, if you use my code in your mod, then you are legally required to license your mod under the GPL and to make your mod's source code publicly available (and a few other things too -- go read [the GPL](https://github.com/ChthonVII/CnC_Remastered_Collection/blob/master/License.txt)). Using my code in a manner inconsistent with the provisions of the GPL is copyright infringement. If it comes to my attention that you are using my code in your mod, but not making your mod's source code publicly available, I will give you a brief opportunity to rectify the situation, and then I will file a DMCA complaint against your mod if you fail to do so. Don't make me do that. Don't be a jerk. Publish your source code.


# A Reminder that Mods Are Not Official EA Products
------------------
 This is a mod. It's not an official EA product. In fact, [EA wants](https://www.ea.com/games/command-and-conquer/command-and-conquer-remastered/modding-faq) mod authors to remind you that “EA has not endorsed and does not support this product.” So there.

