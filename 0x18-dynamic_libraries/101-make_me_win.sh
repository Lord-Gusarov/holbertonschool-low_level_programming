#!/bin/bash
wget -P /tmp/ https://github.com/Lord-Gusarov/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=/tmp/librand.so
