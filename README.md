
<img src="https://image.ibb.co/eD2rzd/overview.png" alt="overview" border="0">

### Linux (Debian/Ubuntu/Mint)

##### Prerequisites

- You will need the following packages: boost (1.55 or higher), rocksdb, cmake, git, gcc (4.9 or higher), g++ (4.9 or higher), make, qt (Gui toolkit) and python. Most of these should already be installed on your system.
- For example on ubuntu: 
```
sudo apt-get install build-essential python-dev gcc g++ git cmake libboost-all-dev librocksdb-dev
```
- If you are using ubuntu and your version of ubuntu doesn't have librocksdb-dev, you can get it from a ppa instead:
```
sudo add-apt-repository ppa:ethcore/ethcore -y
sudo apt-get update
sudo apt-get install librocksdb-dev
```
- Installation Qt5
```
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler
```
- Installation Qt4
```
sudo apt-get install libqt4-dev libprotobuf-dev protobuf-compiler
```

##### Building
- If your compiler version > 5 (... will fix the warnings ... sometimes):

```
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-5 100 && update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-5 100
```

```
git clone https://github.com/AgusFoundation/aguscoin_3.11.git
git clone https://github.com/AgusFoundation/aguscoinwallet_gui.git
cd aguscoinwallet_gui
ln -s ../aguscoin_3.11 cryptonote
mkdir build && cd build && cmake .. && make
```

You can set a submodule to the aguscoin sources instead the symbolic link. The binaries will be in `/build/` after compilation is complete.

##### Running GUI-Wallet

```
./AgusCoin
```

---------------------------------------------------------------------------

### Apple

##### Prerequisites

- Install [cmake](https://cmake.org/). See [here](https://stackoverflow.com/questions/23849962/cmake-installer-for-mac-fails-to-create-usr-bin-symlinks) if you are unable call `cmake` from the terminal after installing.
- Install the [boost](http://www.boost.org/) libraries. Either compile boost manually or run `brew install boost`.
- Install XCode and Developer Tools.
- Install [Qt](http://qt.io)

##### Building
```
git clone https://github.com/AgusFoundation/aguscoin_3.11.git
git clone https://github.com/AgusFoundation/aguscoinwallet_gui.git
cd aguscoinwallet_gui
ln -s ../aguscoin_3.11 cryptonote
mkdir build && cd build && cmake .. && make
```

You can set a submodule to the aguscoin sources instead the symbolic link. The binaries will be in `/build/release/src` after compilation is complete.

---------------------------------------------------------------------------

### Windows 10

##### Prerequisites
- Install [Visual Studio 2017 Community Edition](https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15&page=inlineinstall)
- When installing Visual Studio, it is **required** that you install **Desktop development with C++** and the **VC++ v140 toolchain** when selecting features. The option to install the v140 toolchain can be found by expanding the "Desktop development with C++" node on the right. You will need this for the project to build correctly.
- Install [Boost 1.59.0](https://sourceforge.net/projects/boost/files/boost-binaries/1.59.0/), ensuring you download the installer for MSVC 14.
- Install [Qt](http://qt.io)

##### Building

- From the start menu, open 'x64 Native Tools Command Prompt for vs2017'.
```
cd <your_aguscoin_directory>
mkdir build
cd build
```

- Set the PATH variable for cmake: ie.
```
set PATH="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin";%PATH%
```
- set symbolic link (you can setup a submodule to the aguscoin sources instead)
```
ln -s ../your_aguscoin_dir cryptonote
```
- run cmake
```
cmake -G "Visual Studio 14 Win64" .. -DBOOST_ROOT=C:/local/boost_1_59_0 + PATHTO Qt
```
- finally build it
```
MSBuild AgusCoin.sln /p:Configuration=Release /m
```

You will find all your binaries in the '..\build\src\Release' directory.
