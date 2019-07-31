//============================================================================
// Name        : comparison1.cpp
// Author      : AMAN
// Version     :



string_x="aman"
string_y="phone"

echo "find $string_x and $string_y strings equal?"
[ $string_x = $string_y ]
echo $?

num_x=100
num_y=100

echo "Is $num_x equal to $num_y ?"
[ $num_x -eq $num_y ]
echo $?
