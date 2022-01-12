#!/bin/sh

echo "Enter Your file name:"
read filename
g++ $filename && echo "Compiled Successfully!!!" && ./a.out

