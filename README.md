# Cross Platform OpenGL project
This is a project template for OpenGL development via CMake
It was created mainly for [LearnOpenGL tutorials](https://learnopengl.com/).
Includes GLAD, GLM, and GLFW libraries. Has a simple main.cpp file with ["Hello Window"](https://learnopengl.com/Getting-started/Hello-Window) for testing purposes.

Works with Neovim, CLion and any other IDE with a CMake build system.

If working in the terminal, There is a friendly Makefile that can be used to startup cmake if your IDE doesn't do that already.

```bash
make
```
To set up build system

```bash
make run
```
To compile and run the project

[GLFW Versions Here](https://github.com/glfw/glfw/releases)
To Choose what GLFW version you want: 
```bash
cd lib/glfw
git checkout 3.4 # I Chose version 3.4, look at the repository tags to find what version
cd -       # Go back to the top directory
git add lib/glfw
git commit -m "changed glfw to 3.4 version"
git push    # if you have a remote repository
```

If someone wants to get those changes
```bash
git pull
git submodule update --init
```


Works on multiple platforms. Tested on:
- MacOS 10.13.3, CLion 2017.3.3, Xcode toolchain
- Windows 10, CLion 2017.3.3, MinGW toolchain
- Arch Linux, Neovim, GCC toolchain


