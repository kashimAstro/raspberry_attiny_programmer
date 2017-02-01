#!/bin/bash
#type 85
#id   AttinyGPIO 

if [ "$1" != "" ]  && [ "$2" != "" ]; 
then
	sudo /usr/bin/avrdude -p t$1 -c $2 -v -t
else
	echo 'parameter: type id';
fi
