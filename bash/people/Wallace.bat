call ../set_pbos.bat

set outputFolder=D:\Arma\180th-AC-Armoury\Mod\180th Assualt Corps - Armoury\addons
set sourceFolder=D:\Arma\180th-AC-Armoury\Mod

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=D:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\Adam\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=D:\Arma\180th-AC-Armoury\bash\include.txt

call ../build.bat