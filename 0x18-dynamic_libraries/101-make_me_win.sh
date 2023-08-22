#!/bin/bash
wget -P /tmp https://github.com/ThamiBa/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libwgm.so
export LD_PRELOAD=/tmp/libwgm.so
