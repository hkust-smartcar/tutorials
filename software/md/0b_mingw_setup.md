# MinGW Setup

Author: Peter Tse (mcreng)

MinGW is a C++ compilation tool for Windows. You may use MinGW to compile the source codes for ordinary C++ projects.

### Steps

- Install MinGW

  - https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download

- Add MinGW to your PATH

  - Windows Settings -> Edit the system environment variables
  - Advanced -> Environment Variables...
  - For 'User variables for *username*', press 'Edit' on variable 'Path'
  - 'New' -> Put in the path of MinGW\bin, usually in `C:\MinGW\bin`.

- Setup Eclipse

  - File -> New -> C++ Project
  - Change project name/location
  - Toolchains: MinGW GCC
  - Right-click your project
    - Properties
    - C/C++ Build -> Settings -> Tool Settings
    - GCC C++ Compiler -> Miscellaneous
    - Append `-std=c++11` to Other flags
    - Apply and close

  ​