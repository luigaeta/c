/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void boardcolor(char *square, char *outcome);

/*
*   void function that receives the location of a square in a chekerboard 8x8 that will return the color of the required square.
*   Parameter 1: String that contains the position to be evaluated, following this format "column/row", examples: a1, b4, h8
*   Parameter 2: pointer aiming to a string to store the result of the evaluation: "White", "Black" or "Error".
*
*/
void boardcolor(char *square, char *outcome)
{
    /*Implement your code here, notice that you can use string.h library APIs*/
    int a = square[0];
    int b = square[1];
    if(a>104||a<97||b>56||b<49)
    {
    strcpy(outcome, "Error");
    }
    else
    {
        if(a%2!=0&&b%2==0||a%2==0&&b%2!=0)
        {
            strcpy(outcome, "White");
        }
        else
        {
            strcpy(outcome, "Black");
        }
    }
}

int main()
{
    /*In this main function we have the call of the "boardcolor" function and also the implementation of some TestCases,
    please DO NOT edit any code of this main function and just implement your logic inside boardcolor()*/
    char index = 0;
    char outcomearray[5];
    char expectedoutcomes[5][6] = {"White","Error","Black","White", "Black"};
    char squaresarray[5][3] = {
        "a1",
        "h9",
        "d2",
        "d7",
        "f8"
    };

    while(5 > index)
    {
        boardcolor(&squaresarray[index][0],&outcomearray[0]);
        if(0 == strcmp(&expectedoutcomes[index][0],&outcomearray[0]))
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



