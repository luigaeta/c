/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


unsigned int calculate_distance(char *stringtocheck);

/*
*   function that receives a string that has 2 integers in the range of -100 to 100 and returns the "distance" between both points.
*   Notice that the distance is always a possitive number.
*   Parameter 1: String that contains the two integers values divided by 2 blank spaces (example: "-20  40")
*/
unsigned int calculate_distance(char *stringtocheck)
{
    char * token = strtok(stringtocheck, " ");
     char * num[2];
     int i=0;

    while( token != NULL ) {
      num[i]=token;
      token = strtok(NULL, " ");
      i++;
   }
    int a,b;
    a = atof(num[0]);
    b = atof(num[1]);
    int res = fabs (a-b);
    return res;
    
}

int main()
{
    /*In this main function we have the call of the "calculate_distance" function and also the implementation of some TestCases,
    please DO NOT edit any code of this main function and just implement your logic inside calculate_distance()*/
    char index = 0;
    unsigned int expectedoutcomes[5] = {55, 140, 20, 20, 0};
    char stringarray[5][10] = {
        "-20  35",
        "100  -40",
        "-80  -60",
        "-10  10",
        "0  0"
    };
    
    while(5 > index)
    {
        if(expectedoutcomes[index] == calculate_distance(&stringarray[index][0]))
        {
            printf("TC%i: OK\n",index+1);
        }
        else
        {
            printf("TC%i: NOT OK\n",index+1);
        }
        index++;
    }

    return 0;
}