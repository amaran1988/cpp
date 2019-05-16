#!/bin/bash


#===================================================
#       Compiling C++ files using G++
#===================================================

clear

echo "Bash Directory       : $BASH"
echo "Bash Version         : $BASH_VERSION"
echo "Home Directoy        : $HOME"
echo "Current Directory    : $PWD"
echo "PID                  : $$"
echo ""


if [ -e *.exe ]
then
	rm *.exe
	echo "Removing all Executables..."
else
	echo "Executables cleaned"
fi

if [ -e *.o ]
then
	rm *.o
	echo "Removing all Object files..."
else
	echo "Object files cleaned"
fi

echo ""
echo "======================================"
echo "     Compiling the $1 file            " 
echo "======================================"
echo "" 
g++ -o final.exe $1

echo "g++ -o final.exe $1"

echo ""
echo "======================================"
echo "        Display the output						"
echo "======================================"

./final.exe
echo ""
echo ""

