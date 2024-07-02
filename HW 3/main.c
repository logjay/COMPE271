#include<stdio.h>
int main()
{
int check;
/// Variable: "check" will hold the value returned by the function
///Call the function to check the Endianness here
/// This is where your function will be called to return endianness
check = checkEndianess ();
/// TODO for TAs and Students who will use this function to check the student function
/// TODO Write the code to check the value returned by the function
/// TODO print if the system uses little Endian or big Endian notation
return(0);
}
/* Function "checkEndianess" checks the Endianness of the machine on which
 this program is executed. It takes an integer value as input and returns an
 integer value.
 The function should return 0 if the architecture is "Little Endian" and
 return 1 if the architecture is "Big Endian".
*/
int checkEndianess ()
{
int check = 1;
check = check >> 1;
return(check);
}
