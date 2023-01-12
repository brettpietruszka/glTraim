# glTraim
Open GL, GLFW, GLM both 2D and 3D aim trainer that currently supports both macOS and Windows.

## macOS
To run on macOS, simply navigate to this directory and run ./main.out. To build on macOS, use the 
Makefile located in this directory.

## Windows
Windows support for this application works through msys2.

First, download glfw with pacman in the msys2 terminal via:

pacman -S mingw-w64-x86_64-glfw

Then, the Makefile in this directory will work. Likewise, running ./main.exe will run the executable.
