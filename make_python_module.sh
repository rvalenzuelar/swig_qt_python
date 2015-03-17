#!/bin/bash

# Compiles and export C module to python 
# using SWIG
# 
# Raul Valenzuela
# 2015

# locate interface file name
IFILE="$(ls *.i)"

# parse module name
MODNAME=${IFILE%.i}

# runs swig for python with the inteface file
swig -python -c++ -Wall $IFILE

# run qmake
qmake -o Makefile example.pro

# run make
make 

ln -s ./libexample.so.1.0.0 _example.so