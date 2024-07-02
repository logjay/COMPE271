#include <stdio.h>
#include <stdlib.h>


void printFloatRepresentation(float number){
    int sign = 0, exp = 0, mantissa = 0, i, numint = (int)number;

    char* use = ' ';
    float test = number;
    int address = (int)&number;

    printf("%x\n", address);





    printf("(%d) %d (1).%d\n", sign, exp, mantissa);
}
//************************************************************************************/
//
//							    FloatCompare
//
//		   Description:Accepts two float numbers and compares them bitwise based
//			       on floating point representations. This function will have
// 			       to convert the given numbers into IEEE floating
// 			       representation and then do bitwise comparison
//		   Preconditions:two input arguments are passed
//		   Postconditions:Returns 1,-1 or 0 based on the comparison
//				  1 if number1>number2
//                               -1 if number2>number1
//                                  0 if equal
//		   Calls:			N/A
//		   Called by:		main
//
//***********************************************************************************/
int  bitwisedFloatCompare(float number1,float number2){

    if(number1 == number2){
        return(0);
    }
    else if(number1 > number2){
        return(1);
    }
    else{ return(-1);}
}
int main(){

    printFloatRepresentation(35.875);
    return(0);
}
