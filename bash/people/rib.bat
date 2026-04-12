call ../set_pbos.bat

set outputFolder=D:\!gamesdev\Helix Studios\180th-AC-Armoury\Mod\180th Assualt Corps - Armoury\addons
set sourceFolder=D:\!gamesdev\Helix Studios\180th-AC-Armoury\Mod

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\plumr\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=D:\!gamesdev\Helix Studios\180th-AC-Armoury\bash\include.txt

call ../build.bat