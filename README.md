<p align="center">
    <img src="https://avatars2.githubusercontent.com/u/50863181">
</p>
<p align="center">
    <a href="https://github.com/ArmaForces/Medical/issues">
        <img src="https://img.shields.io/github/issues-raw/ArmaForces/Medical.svg?label=Issues" alt="ArmaForces Medical Issues">
    </a>
    <a href="https://github.com/ArmaForces/Medical/blob/master/LICENSE">
        <img src="https://img.shields.io/badge/License-GPLv2-red.svg" alt="ArmaForces Medical License">
    </a>
    <a href="https://github.com/ArmaForces/Medical/actions">
        <img src="https://github.com/ArmaForces/Medical/workflows/Arma/badge.svg">
    </a>
</p>
<p align="center"><sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases/latest">CBA</a>.</strong></sup></p>

**ArmaForces Medical** is a collaborative effort by the members of <a href="https//armaforces.com/">ArmaForces</a>, polish Arma 3 community.

Main purpose of this addon is to bend and adjust ACE Medical to the group gameplay needs and style.

The mod is on the same foundation as the ACE3 mod, using its framework, systems, tools and standards. It is entirely **open-source** and licensed under the GNU General Public License ([GPLv2](https://github.com/ArmaForces/Mods/blob/master/LICENSE)).

Huge appreciation and thanks to [ACE3 Team](http://ace3mod.com/team.html) for their open-source nature and permission to use their systems.

# Overwiew

- Decreased treatment times
  - Bandaging time / 2
  - Applying Tourniquet 7 -> 2.5 s
  - Removing Tourniquet 7 -> 1.5 s
  - Splint 7 -> 5 s
  - IV 12 -> 5 s
- Reworked bandages
  - All bandages are at least 2-3 times more efficient than in standard ACE
  - 3 types of efficiency (standard ACE bandages are maximum at 2)
    - Super - 10-8 base efficiency
    - Increased - 6-4 base efficiency
    - Standard - 2-4 base efficiency
  - Much longer wound opening times, especially for super efficiency
    - Super - 10% opening chance, 10-30 minutes durability
    - Increased - 30% opening chance, 6-20 minutes
    - Standard - 40% opening chance, 5-10 minutes
- Pain fighting medication (Apap) without side effects
  - A bit weaker than morphine
  - Only for conscious units

## Bandages efficiency table

`++` = Super | `+` = Increased | None = Standard

|    Wound   | Field Dressing | Elastic | Packing | QuikClot |
|:----------:|:--------------:|:-------:|:-------:|:--------:|
|  Abrasion  |       ++       |         |         |          |
|  Avulsion  |                |    ++   |         |          |
|  Contusion |                |    ++   |         |          |
|    Crush   |                |    ++   |         |          |
|     Cut    |       ++       |         |         |          |
| Laceration |       ++       |         |         |          |
|  Velocity  |        +       |    +    |    ++   |    ++    |
|  Puncture  |        +       |    +    |    ++   |    ++    |

## Setup

### Requirements

- Arma 3
- Arma 3 Tools (available on Steam)
- Run Arma 3 and Arma 3 Tools directly from Steam once to install registry entries (and again after every update)
- [HEMTT](https://github.com/synixebrett/HEMTT) binary placed in project root or globally installed
  - `hemtt` (Linux) or `hemtt.exe` (Windows) or `setup.exe` (Windows global install)

### Procedure

_Replace `hemtt` with `hemtt.exe` on Windows._

- Open terminal (Linux) or command line (Windows)
- Run `$ hemtt build` to create a development build (add `-f` to overwrite already built addons)
- Run `$ hemtt build --release` to create a release build (add `-f` to overwrite already built release)
- Run `$ hemtt clean` to clean build files

**Windows Helpers:**

- Double-click `build.bat` to create a development build

### Recommended tools

It's recommended to use [Visual Studio Code](https://) editor with following plugins to ensure equal development environment for all contributors:

- [EditorConfig](https://marketplace.visualstudio.com/items?itemName=EditorConfig.EditorConfig)
- [SQFLint](https://marketplace.visualstudio.com/items?itemName=skacekachna.sqflint)
- [SQF Langauge](https://marketplace.visualstudio.com/items?itemName=Armitxes.sqf)
- [psioniq File Header](https://marketplace.visualstudio.com/items?itemName=psioniq.psi-header)
