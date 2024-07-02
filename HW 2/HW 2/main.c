#include <stdio.h>
#include <stdlib.h>
#ifndef BITMANIPULATIONS_H_
#define BITMANIPULATIONS_H_


typedef  unsigned int	uint32_t;
typedef  unsigned short uint16_t;



#endif /* BITMANIPULATIONS_H_ */

///************************************************************************************/
///
///							    countNumberofOnes
///
///		   Description: Counts the number of 1s in an integer passed as argument
///		   Preconditions:input argument is passed as a pointer
///		   Postconditions:the number of 1s  returned
///
///		   Calls:			N/A
///		   Called by:		main
///
///***********************************************************************************/

int countNumberofOnes(uint32_t *intData)
{
	// Write a function that  counts number of 1s in an integer passed
    int j, count = 0;
        for(j = 0; j < 32; j++){
            if(((intData[0] >> j) % 2) == 1){
                count++;
            }
        }
    return count;
}


///***********************************************************************************/
///*
///*							    setBit
///*
///*		   Description: The function sets the bit in the specified bit position in an to the specifid value.
///*		   Preconditions: Value can be a 1 or 0.  bitPosition will be between 0 and 31 (for integer size argument)
///*		   Postconditions: The bit of *inData at position biPosition will be set to value
///*
///*		   Calls:			N/A
///*		   Called by:		main
///*
///***********************************************************************************/

void setBit(uint32_t *inData, uint32_t bitPosition, uint32_t  value)
{
/// Please do not treat the  integer as arrays , this question is about bit manipulations
/// You will need to use bitwise operations to solve this question
    if(value == 1){
        *inData |= (value << bitPosition);}
    else{
        *inData &= (value << bitPosition);}


}

///***********************************************************************************/
///*							hammingDistance
///*			Description: Function hammingDistance calculates total number of bits
///*    		that need to be inverted in order to change inData1 into inData2 or vice versa.
///*			Preconditions: The function accepts two unsigned integers as input
///*		    Postconditions: The function returns the hamming distance
///*
///		   Calls:			N/A
///		   Called by:		main
///*
///***********************************************************************************/

int hammingDistance(uint32_t inData1, uint32_t inData2)
{

    uint32_t Xor = inData1 ^ inData2;
    int j, count = 0;
        for(j = 0; j < 32; j++){
            if(((Xor >> j) % 2) == 1){
                count++;
            }
        }
    return count;
}
int main()
{
    uint32_t Data = 10, Data2 = 2;

    setBit(&Data,3,1);

    printf("%d\n", countNumberofOnes(&Data));
    printf("%d\n", hammingDistance(Data, Data2));

    return 0;
}
