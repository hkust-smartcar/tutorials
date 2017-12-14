# ARM/JLink Setup

Author: Dipsy Wong ([dipsywong98](http://www.github.com/dipsywong98))

This section will cover how to set up eclipse for flashing program to MCU and setting up the development environment, which will take you around 1hour including downloading software. If you are unlucky, it may even take you a whole day.

Video walkthrough: https://youtu.be/v834HF_Uha4

If you want to set up eclipse for console program, please refer to 
https://github.com/mcreng/SmartCarSWTutorial18/blob/master/0b_mingw_setup.md

### 1.Download and Install the Essential Software

- [Eclipse C++](http://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/neon1)(Suggested version: Neon1, never use Neon2)

  direct download links:
  - [Windows 32bit](http://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/neon/1/eclipse-cpp-neon-1-win32.zip)
  - [Windows 64bit](http://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/neon/1/eclipse-cpp-neon-1-win32-x86_64.zip)
  - [MacOS](http://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/neon/1/eclipse-cpp-neon-1-macosx-cocoa-x86_64.tar.gz)
  - [Linux 32 bit](http://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/neon/1/eclipse-cpp-neon-1-linux-gtk.tar.gz)
  - [Linux 64 bit](http://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/neon/1/eclipse-cpp-neon-1-linux-gtk.tar.gz)
- [GNU Tools for ARM](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads) (Suggested version: 5.4 2016q3, which is not the newest)

  direct download links:
  - [Windows](https://developer.arm.com/-/media/Files/downloads/gnu-rm/5_4-2016q2/gcc-arm-none-eabi-5_4-2016q2-20160622-win32.exe?revision=8d5550ff-4ad0-4c6d-9a01-d6447d22784d?product=GNU%20Arm%20Embedded%20Toolchain)
  - [Linux](https://developer.arm.com/-/media/Files/downloads/gnu-rm/5_4-2016q2/gccarmnoneeabi542016q220160622linuxtar.bz2?revision=8f445a99-c1ae-4ed8-9eb8-f41929a671c4?product=GNU%20Arm%20Embedded%20Toolchain)
  - [MacOS](https://developer.arm.com/-/media/Files/downloads/gnu-rm/5_4-2016q2/gccarmnoneeabi542016q220160622mactar.bz2?revision=03ae9f41-1f43-40ed-9db8-a4b6342378ac?product=GNU%20Arm%20Embedded%20Toolchain,64-bit,,Mac%20OS%20X,5-2016-q2-update)
- [Segger J-Link software pack](https://www.segger.com/downloads/jlink/#J-LinkSoftwareAndDocumentationPack) (Suggested version V614b, which is not the newest also)

  direct download links:
  - [Windows](https://www.segger.com/downloads/jlink/JLink_Windows_V614b.exe)
  - [MacOS](https://www.segger.com/downloads/jlink/JLink_MacOSX_V614b.pkg)
  - [Linux 32bit](https://www.segger.com/downloads/jlink/JLink_Linux_V614b_i386.deb)
  - [Linux 64bit](https://www.segger.com/downloads/jlink/JLink_Linux_V614b_x86_64.deb)
- [GNU Make](http://gnuwin32.sourceforge.net/packages/make.htm) 
  - [Windows](https://downloads.sourceforge.net/project/gnuwin32/make/3.81/make-3.81.exe?r=http%3A%2F%2Fgnuwin32.sourceforge.net%2Fpackages%2Fmake.htm&ts=1512447173&use_mirror=ncu)
  - [Mac](https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/rudix/make-3.82-4.pkg) (if that doesn't work, find another one at https://code.google.com/archive/p/rudix/downloads)
### 2. Install Plug-in for Eclipse

https://youtu.be/v834HF_Uha4?t=35s

- GNU ARM eclipse Plugins

  - [Help]->[Install New Software...]

    ![2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/2.PNG)
  - Type http://gnuarmeclipse.sourceforge.net/updates in the textbox next to [Work with] label
    - Press Enter
    - Check the item [GNU ARM C/C++] in the CheckedListBox below

      ![2.1](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/2.1.PNG)
    - Press [Next]->[Next]->Accept license agreement & [finish]
- EGit
  - [Help]->[Install New Software...]
  - Type http://download.eclipse.org/egit/updates in the textbox next to [Workwith] label
    - Press Enter
    - Check the items [Git integration for Eclipse] & [Java implementation of Git] in the CheckedListBox below
    - Press [Next]->[Next]->Accept license agreement & [finish]

### 3. Library Setting

https://youtu.be/v834HF_Uha4?t=2m29s

#### 3.1 Download the Library by Git Pull

- [Window]->[Open Perspective]->[Other...]->Select [Git]->[OK]

  ![3.1.1](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.1.1.PNG)
- Copy https://github.com/hkust-smartcar/libsccc.git (Library)
  - Click [Git Repositories] tab
  - { Ctrl + V } / RightClick & [Paste Repository Path or URI]
  - [Next] -> [Next] -> [Finish]

    ![3.1.4](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.1.4.PNG)
- Right Click [libsccc] -> [Pull]

#### 3.2 Import the Library to Eclipse

- Goto [C/C++ perspective] on the top-right corner

  ![3.2.1](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.2.1.PNG)
- RightClick blank space on [Project Explorer] tab

  ![3.2.2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.2.2.PNG)
- [C/C++ : Existing Code as Makefile Project] -> [Next]

  ![3.2.3](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.2.3.PNG)
- Select Cross GCC
- Name the new project as `libsccc`
- Set the existing code location
- [Finish]

  ![3.2.4](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.2.4.PNG)

#### 3.3 Discovery Option Setting

- [Window] -> [Preferences] -> [C/C++ : Property Pages Settings]

  ![3.3.2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.3.1.PNG)
- Check [Display “Discovery Options” page]
- [Apply]
- [OK]

  ![3.3.2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.3.2.PNG)

#### 3.4 Properties Setting

https://youtu.be/v834HF_Uha4?t=5m

- RightClick [libsccc] on [Project Explorer] tab -> [Properties]
- Goto [C\C++ Build]
  - Uncheck [Generate Makefiles automatically]

    ![3.4.0](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.4.0.PNG)

  - Goto [Behavior] tab
    - Uncheck [Stop on first build error]
    - Check [Enable parallel build] (Optional)
  - [Apply]

    ![3.4.1](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.4.1.PNG)


- Goto [C/C++ Build : Discovery Options]
  - Tools: [Cross G++ Compiler]

  - Check [Automate discovery of paths and symbols]

    - Ignore the warning "this discovery method is deprecated" if any
      (This warning will appear if you are using Oxygen)

  - Discovery profile: [Managed Build System - ...]

  - Compiler invocation command : `arm-none-eabi-g++`

  - Append ` –std=gnu++11` to Compiler invocation argument

  - If you can's see the options, make the window full screen

    ![3.4.2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.4.2.PNG)


- Goto [C/C++ Build : Environment]
  - [Add...] -> Name: `ARM_TOOLCHAIN` -> Value: `{ Path of GNU Tools for ARM folder }`
  - [Add...] -> Name: `SCCC_BUILD` -> Value: `DEBUG`
  - [Add...] -> Name: `SCCC_CONFIG` -> Value: `2017_INNO`
  - Append `{ Path of GNU Tools for ARM folder }\bin` to `[PATH]` Variable
  - Append `{ Path of GNU Make folder }\bin` to `[PATH]` Variable
  - [Apply]![img](file:///C:/Users/dipsy/Desktop/ROBO/SmartCarSWTutorial18/img/eclipse/3.4.3.PNG?lastModify=1512410959)
- **Build the library**

  ![3.4.5](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/3.4.5.PNG)


### 4. Project Setting

whenever you want to create a new project for programming smart car, you can start from this section. It is always a good measure to have a spare project for testing.
https://youtu.be/v834HF_Uha4?t=9m

#### 4.1 Create New Project

- Right-click on [Project Explorer] -> [New] -> [C++ Project]

  ![4.1.1](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/4.1.1.PNG)
  - Choose project name, don't include white space or you will GG
  - Project Type: [Executable : Empty Project], Toolchains: [Cross GCC]

    ![4.1.2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/4.1.2.PNG)
  - -> [Next] -> [Next]
  - Cross compiler prefix: `arm-none-eabi-`
  - Cross compiler path: `{ Path to GNU Tools for ARM }`
- [Finish]

  ![4.1.3](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/4.1.3.PNG)

#### 4.2 Property Setting

Goto [C/C++ Build]

- Goto [Builder Settings] tab
  - Remove `Debug` from Build directory

    ![4.2.1](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/4.2.1.PNG)
- repeat 3.4
- Goto [C/C++ Build : Environment]
  - [Add...] -> Name: `LIBSCCC_BIN_PATH` -> Value: `{ Path of library folder }\lib`
  - [Add...] -> Name: `LIBSCCC_INC_PATH` -> Value: `{ Path of library folder }\inc`
- [Apply]

  ![4.2.2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/4.2.2.PNG)

**Remember that variable [SCCC_CONFIG] of both library and your own project must be the same.**

#### 4.3 Include the Library to your Project

- Goto [C/C++ General : Paths and Sybmols]
  - Goto [Includes] tab
    - Select Languages: [GNU C++]
    - [Add....] -> [Workspace...] -> Select [libsccc : inc]-> [OK] -> [OK]

      ![4.3](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/4.3.PNG)


#### 4.4 Download linker's script, makefile and main.cpp

- https://drive.google.com/drive/u/0/folders/0B-KAbvJ3lRuIREhJQzllSy1iZjQ

- Download, extract and put to your root folder

  ![4.4](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/4.4.PNG)

- Don't change this part unless you know what you are doing

  ```C++
  namespace libbase {
  namespace k60 {
  Mcg::Config Mcg::GetMcgConfig() {
    Mcg::Config config;
    config.external_oscillator_khz = 50000;
    config.core_clock_khz = 150000;
    return config;
  }
  }  // namespace k60
  }  // namespace libbase
  ```

- **Building the codes**

### 5 Debugger setting

(After you finish **building the project** without error and **refresh project**)
https://youtu.be/v834HF_Uha4?t=17m27s

#### 5.1 New Debug Config

- Press the triangle next to a “BUG”
- [Debug Configurations...]

  ![5.1_ex](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/5.1_ex.PNG)
- RightClick [GDB SEGGERJ-Link Debugging
- [New]

  ![5.1](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/5.1.PNG)

#### 5.2 Select Binary

- You should find something like `bin/??????.elf` here (This will be automatically generated upon successful project build)
- If not, you should press [Search Project...] and find it

  ![5.2_ex](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/5.2_ex.PNG)
- If you still cannot find it, **refresh the project** by clicking F5, and see whether there is a binary directory at the project explorer
- Then, you should enable auto build because there is always someone who
  debugs a million times without rebuilding the project. XD

  ![5.2](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/5.2.PNG)

#### 5.3 Select MCU and J-Link

- Goto [Debugger] tab
- Server Executable: `{path to JLink}\JLinkGDBServerCL.exe`
  (For window, it is under C:\Program Files (x86)\SEGGER\\\<Jlink version>\JLinkGDBServerCL.exe)
- Device name: `MK60FN1M0xxx15` (MCU)
- SWD (small J) or JTAG(J-Link) (big J)
- Uncheck [Allocate console for semihosting and SWO]
- Client Executable: `{path to GNU for ARM}\bin\arm-none-eabi-gdb.exe`

  ![5.3](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/5.3.PNG)

#### 5.4 No Semi-hosting

- Goto [Startup] tab
- Uncheck [Enable semihosting]
- [Apply]
- [Debug]

  ![5.4](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/5.4.PNG)

### 5.5 Wait for Flashing

If you see this error message, it means you successfully set up eclipse (this error means everything is successfully built, but JLink server cannot find a connected JLink)

![6_fin](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/6_fin.PNG) 

### 6. Done and Enjoy Your SmartCar Journey 😘

Whenever you want to flash program, clean project -> build project -> click the debugger

![img](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/6.PNG)

### Extra Tips When Facing Errors

Whenever you fail flashing, try this:

1. Refresh project
2. Clean project
3. Build project
4. Debug

If still fail, try building the library again, and repeat steps above



If launching sequence error, unplug and plug the USB if you are flashing program.
If still cannot solve, it may be you can config the debugger wrongly. 
If still cannot solve, try restarting eclipse and computer.
![7_sequence_error](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/7_sequence_error.PNG)



If GDB server fail, check your connection of JLink, and check whether you have turn on your smart car
![6_fin](https://raw.githubusercontent.com/mcreng/SmartCarSWTutorial18/master/img/eclipse/6_fin.PNG)


Care only errors, ignore the warnings