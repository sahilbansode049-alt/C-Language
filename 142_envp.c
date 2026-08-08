#include <stdio.h>
int main(int argc, char *argv[], char *envp[])
{
    int iCounter;

    for (iCounter = 0; envp[iCounter] != NULL; iCounter++)
        puts(envp[iCounter]);

    return 0;
} // output
/*
ALLUSERSPROFILE=C:\ProgramData
APPDATA=C:\Users\Admin\AppData\Roaming
CHROME_CRASHPAD_PIPE_NAME=\\.\pipe\crashpad_7632_YEQTFJVYSIFWFUKY
CommonProgramFiles=C:\Program Files (x86)\Common Files
CommonProgramFiles(x86)=C:\Program Files (x86)\Common Files
CommonProgramW6432=C:\Program Files\Common Files
COMPUTERNAME=DESKTOP-KM9TEHT
ComSpec=C:\Windows\system32\cmd.exe
DriverData=C:\Windows\System32\Drivers\DriverData
FPS_BROWSER_APP_PROFILE_STRING=Internet Explorer
FPS_BROWSER_USER_PROFILE_STRING=Default
HOMEDRIVE=C:
HOMEPATH=\Users\Admin
JAVA_HOME=C:\Program Files\Eclipse Adoptium\jre-8.0.462.8-hotspot\
LOCALAPPDATA=C:\Users\Admin\AppData\Local
LOGONSERVER=\\DESKTOP-KM9TEHT
NUMBER_OF_PROCESSORS=4
OneDrive=C:\Users\Admin\OneDrive
ORIGINAL_XDG_CURRENT_DESKTOP=undefined
OS=Windows_NT
Path=C:\Program Files\Python314\Scripts\;C:\Program Files\Python314\;C:\Program Files\Eclipse Adoptium\jre-8.0.462.8-hotspot\bin;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Microsoft VS Code\bin;C:\Users\Admin\AppData\Local\Microsoft\WindowsApps;C:\MinGW\bin;C:\Users\Admin\AppData\Local\Programs\Microsoft VS Code\bin
PATHEXT=.COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.MSC;.PY;.PYW
PROCESSOR_ARCHITECTURE=x86
PROCESSOR_ARCHITEW6432=AMD64
PROCESSOR_IDENTIFIER=Intel64 Family 6 Model 58 Stepping 9, GenuineIntel
PROCESSOR_LEVEL=6
PROCESSOR_REVISION=3a09
ProgramData=C:\ProgramData
ProgramFiles=C:\Program Files (x86)
ProgramFiles(x86)=C:\Program Files (x86)
ProgramW6432=C:\Program Files
PROMPT=$P$G
PSModulePath=C:\Program Files\WindowsPowerShell\Modules;C:\Windows\system32\WindowsPowerShell\v1.0\Modules
PUBLIC=C:\Users\Public
SESSIONNAME=Console
SystemDrive=C:
SystemRoot=C:\Windows
TEMP=C:\Users\Admin\AppData\Local\Temp
TMP=C:\Users\Admin\AppData\Local\Temp
USERDOMAIN=DESKTOP-KM9TEHT
USERDOMAIN_ROAMINGPROFILE=DESKTOP-KM9TEHT
USERNAME=Admin
USERPROFILE=C:\Users\Admin
windir=C:\Windows
TERM_PROGRAM=vscode
TERM_PROGRAM_VERSION=1.105.1
LANG=en_US.UTF-8
COLORTERM=truecolor
VSCODE_NONCE=89f9437d-174c-4ab2-900a-eb061ce69261
*/