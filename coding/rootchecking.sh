//============================================================================
/
// Author      : AMAN
//============================================================================

#!/bin/bash

rootchecking=1000
if [ "$UID" -ne "$rootchecking" ]
then
echo "is consider as root "
else
echo "is not  consider as root"
fi
