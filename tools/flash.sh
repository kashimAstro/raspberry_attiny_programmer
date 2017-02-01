#!/bin/bash
#type 85
#id   AttinyGPIO 
#file file.hex 

if [ "$1" != "" ]  && [ "$2" != "" ];
then
	sudo /usr/bin/avrdude -p t$1 -c $2 -U flash:w:$3
else
        echo 'parameter: type id file.hex';
fi


