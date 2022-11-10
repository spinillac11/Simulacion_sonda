#!/bin/bash
g++ simul.cpp main.cpp
./a.out > data.dat
python graf.py
echo Done!