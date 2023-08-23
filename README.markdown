# CXX PRETTY :heavy_multiplication_x: :nail_care:

![CXX PRETTY CI](https://github.com/angeldollface/cxxpretty/actions/workflows/main.yml/badge.svg)

***A C++ library to work with colored strings using ANSI escape characters.***

## ABOUT :books:

Since I like to make things a little more interesting in my CLI applications written in C++, I decided to write a library that allows anyone to work with colorful strings in the console in C++. This repository contains the source code for this library.

## USAGE :hammer:

### In a C++ project

To use this library in your own C++ code, download the header file from the `src` directory and include it in your code in the following way:

```C++
#include "path/to/cxxpretty.hpp"
```

You should then have access to the following entities:

- the `Color` enum
- the `printColored` function to outpout strings of a specified color
- the `colored` function to modify strings to be of a specified color

When you compile your project, be sure to specify the `includes` flag to the C++ compiler.

### Run the example

To run the example, make sure that you have the following tools installed and available from the command line:

- A C++ compiler
- [Git](https://git-scm.org)
- CMake

Assuming you have trhese tools available, execute the following commands from a command prompt:

- 1.) Download this repository's source code:

```bash
git clone https://github.com/angeldollface/cxxpretty.git
```

- 2.) Change directory into the source directory's root:

```bash
cd cxxpretty
```

- 3.) Build the example executable:

```bash
make build
```

- 4.) Run the example executable:

```bash
make run
```

***NOTE***: Some of the CMake rules may not work on Windows because some of the rules use the Bash scripting language.

## CHANGELOG :black_nib:

### Version 0.1.0

- Initial release.
- Upload to GitHub.

## NOTE :scroll:

- *CXX Pretty :heavy_multiplication_x: :nail_care:* by Alexander Abraham :black_heart: a.k.a. *"Angel Dollface" :dolls: :ribbon:*
- Licensed under the MIT license.