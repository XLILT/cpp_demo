#########################################################################
# File Name: init.sh
# Author: mxl
# Mail: xiaolongicx@gmail.com
# Created Time: Tue 10 Apr 2018 10:19:49 AM CST
#########################################################################
#!/usr/bin/env bash

\cp ../main.cpp ../CMakeLists.txt .
if [ ! -d build ]; then
    mkdir build
fi

