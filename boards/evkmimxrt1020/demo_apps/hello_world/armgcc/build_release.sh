#!/bin/sh
export ARMGCC_DIR=/opt/gcc-arm-none-eabi-9-2019-q4-major
cmake -DCMAKE_TOOLCHAIN_FILE="../../../../../tools/cmake_toolchain_files/armgcc.cmake" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=release  .
make -j 2>&1 | tee build_log.txt
