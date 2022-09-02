/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int getSum(int n)
{
    /* code your solution here */
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        if(i%7!=0&&i%3!=0)
            sum=sum+i;
    }
    return sum;
}

int main()
{
    /*In this main function we have the call of the "getSum" function and also the implementation of some TestCases,
    please DO NOT edit any code of this main function and just implement your logic inside getSum()*/

	int inputToTest[3] = {3, 10, 100};
	int expectedResult[3] = {3, 30, 2842};
    int sum;
    int testCounter;

    for(testCounter = 0 ; testCounter < 3 ; testCounter++) {
        sum = getSum(inputToTest[testCounter]);
        if(sum == expectedResult[testCounter]){
            printf("TC%i: OK\n", testCounter + 1);
        }
        else {
            printf("TC%i: NOK\n", testCounter + 1);
        }
    }

    return 0;
}




