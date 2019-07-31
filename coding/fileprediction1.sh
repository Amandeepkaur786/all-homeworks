//============================================================================
// Name        : fileprediction.sh
// Author      : AMAN
// Version     :
// Copyright   : Your copyright notice
// Description : filexit
//============================================================================

#!/bin/bash

FILEname=$1
if [ -e "$FILEname" ]
then
echo "file is  exiting "
else
echo "file is  not exit"
fi

