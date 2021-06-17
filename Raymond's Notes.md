
# Raymond's Notes:

1. Create a git repo. Make sure to keep up with it and create meaningful commit messages.


2. Highly recommended to read code from a file FIRST before making an interactive shell. Trust me, it's a lot easier.


3. Seperate every part of your interpreter into a serparate file. i.e. Lexer.cpp, Parser.cpp, File_loader.cpp. Then you can combine the process into a main.cpp. (Learn header files .h)


4. Project Structure:
```
README.md #your basic notes/docs

LICENSE.md #your LICENSE

src #your source files (.cpp and .h)
  |___ main.cpp
  |___ Lexer.cpp
  |___ Lexer.h
  |___ etc

build #your compiled output of your interpreter
  |___ SmplScript_windows.exe #windows
  |___ SmplScript_linux #linux

test #your tests
  |___ test1.cpp
  |___ etc

doc #your official in depth documentation
  |___ variables.md
  |___ functions.md
  |___ Getting Started.md
```