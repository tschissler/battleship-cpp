[![Build status](https://psdstewards.visualstudio.com/PSD/_apis/build/status/proscrumdev.battleship-cpp-CI)](https://psdstewards.visualstudio.com/PSD/_build/latest?definitionId=18)

# Battleship C++
A simple game of Battleship, written in C++.

This code can be compiled either by using MAKE or Visual Studio. It has been tested on Windows 10 and on Debian GNU/Linux 10

## Build and run locally

Build and run it using MAKE
```bash
cd MAKE
make
./Battleship.exe
```

## Build and run in a Docker container

YOu can use a Docker Container as a save environment providing all necessary tools to build and run the Battleship application-

### Run a Docker Container with the gcc image

```bash
cd battleship-cpp
docker run -it -v ${PWD}:/battleship gcc bash
```

### Build and run in the Docker container

Build and run it using MAKE
```bash
cd battleship/MAKE
make
./Battleship.exe
```
