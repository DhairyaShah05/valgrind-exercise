# Valgrind Exercise

## This is an extra credit assignmnent for the course ENPM700 : Software development for Robotics. 

## Standard install via command-line
```bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# To build with debugging information, do:
  cmake -S ./ -B build/ -D CMAKE_BUILD_TYPE=Debug
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```
# Answers to the assignment:

## What happens when the executable is linked statically? Does Valgrind still detect those same bugs? 

## Yes, when valgrind is linked statically, Valgrind will detect the same bugs as well, if not more depending on the compilation of static llibraries. 

## Why or why not?

## Valgrind will detect the same errors as the process of checking memory usage is independant of the program is linked, so no matter how the program is linked - statically or dynamically, Valgrind will always detect memory based errors. 
