#!/bin/bash
wget -qP /tmp https://github.com/Emmo00/alx-low_level_programming/blob/main/0x18-dynamic_libraries/sure.o
LD_PRELOAD=/tmp/sure.so
