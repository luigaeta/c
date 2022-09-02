/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void RTC_Decoding(unsigned char * Input, char * Output);

/*       Input: 7 Bytes
*        Output: String with the following format: HH:MM:SS [Day of the Week] [Day] [Month] [Year].
*/
void RTC_Decoding(unsigned char * Input, char * Output)
{
        /*Implement your code here*/
   char meses[12][100] ={"January", "February","March","April","May","June","July","August","September","November","October","December"};
   char days[7][100] ={"Sunday","Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday"};
   int y,m,d,dn,h1,h2,h3,h4;
   char year[4],y1;

   y = Input[0];
   y= y+'0';
   y1 = Input[1];
   y1= y1+'0';
   h1 = Input[9];
   h1= h1+'0';


   if(Input[2]==1)
   {
       m=((Input[2]*10)+Input[3])-1;
   }
   else if(Input[2]==0)
   {
       m =Input[3]-1;
   }

   if(Input[4]!=0)
   {
       d=((Input[4]*10)+Input[5]);
   }
   else if(Input[4]==0)
   {
       y =Input[5];
   }

      if(Input[6]!=0||Input[6]>7)
   {
       return;
   }
   else if(Input[6]==0)
   {
       dn =Input[7]-1;
   }

   Output[0U]=Input[8]+'0';
   Output[1U]=h1;
   Output[2U]=Input[10];
}

void main(void)
{
        /* This is supporting code so you can test the function RTC_Deconding */
        char RTC_Decoded[30];
        unsigned char RTC_Data[7U] = {1, 7, 0, 5, 2, 9, 0, 2, 0, 5, 4, 8, 3, 1};

        RTC_Decoding(RTC_Data, RTC_Decoded);
        printf("%s",RTC_Decoded);
}
