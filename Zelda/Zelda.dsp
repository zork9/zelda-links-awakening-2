# Microsoft Developer Studio Project File - Name="Zelda" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=Zelda - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "Zelda.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Zelda.mak" CFG="Zelda - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Zelda - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "Zelda - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "Zelda - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "Zelda - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MD /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "Zelda - Win32 Release"
# Name "Zelda - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\Enemy.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyDemon.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyDemon2.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyImpl.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyKnightBlue.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyKnightGreen.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyKnightRed.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyMyconid.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyMyconidWizard.cpp
# End Source File
# Begin Source File

SOURCE=..\EnemyOctorok.cpp
# End Source File
# Begin Source File

SOURCE=..\Entity.cpp
# End Source File
# Begin Source File

SOURCE=..\EntityInterface.cpp
# End Source File
# Begin Source File

SOURCE=..\Exit.cpp
# End Source File
# Begin Source File

SOURCE=..\GameEngine.cpp
# End Source File
# Begin Source File

SOURCE=..\Img.cpp
# End Source File
# Begin Source File

SOURCE=..\ImgSys.cpp
# End Source File
# Begin Source File

SOURCE=..\main.cpp
# End Source File
# Begin Source File

SOURCE=..\Player.cpp
# End Source File
# Begin Source File

SOURCE=..\Room.cpp
# End Source File
# Begin Source File

SOURCE=..\Room1.cpp
# End Source File
# Begin Source File

SOURCE=..\StateImg.cpp
# End Source File
# Begin Source File

SOURCE=..\Statue1.cpp
# End Source File
# Begin Source File

SOURCE=..\util.cpp
# End Source File
# Begin Source File

SOURCE=..\Wall.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\begin_code.h
# End Source File
# Begin Source File

SOURCE=..\close_code.h
# End Source File
# Begin Source File

SOURCE=..\Enemy.h
# End Source File
# Begin Source File

SOURCE=..\EnemyDemon.h
# End Source File
# Begin Source File

SOURCE=..\EnemyDemon2.h
# End Source File
# Begin Source File

SOURCE=..\EnemyImpl.h
# End Source File
# Begin Source File

SOURCE=..\EnemyKnightBlue.h
# End Source File
# Begin Source File

SOURCE=..\EnemyKnightGreen.h
# End Source File
# Begin Source File

SOURCE=..\EnemyKnightRed.h
# End Source File
# Begin Source File

SOURCE=..\EnemyMyconid.h
# End Source File
# Begin Source File

SOURCE=..\EnemyMyconidWizard.h
# End Source File
# Begin Source File

SOURCE=..\EnemyOctorok.h
# End Source File
# Begin Source File

SOURCE=..\Entity.h
# End Source File
# Begin Source File

SOURCE=..\EntityInterface.h
# End Source File
# Begin Source File

SOURCE=..\Exit.h
# End Source File
# Begin Source File

SOURCE=..\GameEngine.h
# End Source File
# Begin Source File

SOURCE=..\Img.h
# End Source File
# Begin Source File

SOURCE=..\ImgSys.h
# End Source File
# Begin Source File

SOURCE=..\Player.h
# End Source File
# Begin Source File

SOURCE=..\Room.h
# End Source File
# Begin Source File

SOURCE=..\Room1.h
# End Source File
# Begin Source File

SOURCE=..\SDL.h
# End Source File
# Begin Source File

SOURCE=..\SDL_active.h
# End Source File
# Begin Source File

SOURCE=..\SDL_audio.h
# End Source File
# Begin Source File

SOURCE=..\SDL_byteorder.h
# End Source File
# Begin Source File

SOURCE=..\SDL_cdrom.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_dreamcast.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_macos.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_macosx.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_minimal.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_nds.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_os2.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_symbian.h
# End Source File
# Begin Source File

SOURCE=..\SDL_config_win32.h
# End Source File
# Begin Source File

SOURCE=..\SDL_copying.h
# End Source File
# Begin Source File

SOURCE=..\SDL_cpuinfo.h
# End Source File
# Begin Source File

SOURCE=..\SDL_endian.h
# End Source File
# Begin Source File

SOURCE=..\SDL_error.h
# End Source File
# Begin Source File

SOURCE=..\SDL_events.h
# End Source File
# Begin Source File

SOURCE=..\SDL_getenv.h
# End Source File
# Begin Source File

SOURCE=..\SDL_joystick.h
# End Source File
# Begin Source File

SOURCE=..\SDL_keyboard.h
# End Source File
# Begin Source File

SOURCE=..\SDL_keysym.h
# End Source File
# Begin Source File

SOURCE=..\SDL_loadso.h
# End Source File
# Begin Source File

SOURCE=..\SDL_main.h
# End Source File
# Begin Source File

SOURCE=..\SDL_mouse.h
# End Source File
# Begin Source File

SOURCE=..\SDL_mutex.h
# End Source File
# Begin Source File

SOURCE=..\SDL_name.h
# End Source File
# Begin Source File

SOURCE=..\SDL_opengl.h
# End Source File
# Begin Source File

SOURCE=..\SDL_platform.h
# End Source File
# Begin Source File

SOURCE=..\SDL_quit.h
# End Source File
# Begin Source File

SOURCE=..\SDL_rwops.h
# End Source File
# Begin Source File

SOURCE=..\SDL_stdinc.h
# End Source File
# Begin Source File

SOURCE=..\SDL_syswm.h
# End Source File
# Begin Source File

SOURCE=..\SDL_thread.h
# End Source File
# Begin Source File

SOURCE=..\SDL_timer.h
# End Source File
# Begin Source File

SOURCE=..\SDL_types.h
# End Source File
# Begin Source File

SOURCE=..\SDL_version.h
# End Source File
# Begin Source File

SOURCE=..\SDL_video.h
# End Source File
# Begin Source File

SOURCE=..\StateImg.h
# End Source File
# Begin Source File

SOURCE=..\Statue1.h
# End Source File
# Begin Source File

SOURCE=..\util.h
# End Source File
# Begin Source File

SOURCE=..\Wall.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# Begin Source File

SOURCE=..\SDLmain.lib
# End Source File
# Begin Source File

SOURCE=..\SDL.lib
# End Source File
# End Target
# End Project
