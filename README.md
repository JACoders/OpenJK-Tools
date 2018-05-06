# OpenJK Tools

SDK tools for Jedi Academy and Jedi Outcast released by Raven Software, under
the GNU GPLv2 license.


## Building the code

The OpenJK tools use CMake to generate the project files or makefiles for the
source code. The project files or makefiles can then be used to compile the
source code.


### Windows

Generate the project files either by following the Linux and macOS instructions
or by using the CMake GUI. For the CMake GUI, the source directory should be
the root of the repository. The build directory is a directory of your choice
where the project files will be generated.

Load the generated project file (likely to be a Visual Studio project), and
then build in the IDE.


### Linux and macOS

Generate the makefiles by running:
```bash
mkdir build
cd build
cmake ..
```

Compile the code:
```bash
cd build
make
```


## Licensing

The OpenJK tools are licensed under GNU General Public License 2. See LICENSE
for more information.
