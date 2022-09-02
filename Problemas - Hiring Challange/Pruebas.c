#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
   char RTC_Decoded[30];
   unsigned char RTC_Data[14U] = {1, 7, 0, 5, 2, 9, 0, 2, 0, 5, 4, 8, 3, 1};
   char meses[12][100] ={"January", "February","March","April","May","June","July","August","September","November","October","December"};
   char days[7][100] ={"Sunday","Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday"};
   char year[4],y1;
   int y,m,d,dn;

   strcpy(year, "20");
   char z;
   y = RTC_Data[0];
   y= y+'0';
   y1 = RTC_Data[1];
   y1= y1+'0';
   //strcpy(y1, z);

   printf("%c\n",y);
   printf("%c\n",y1);

   if(RTC_Data[2]==1)
   {
       m=((RTC_Data[2]*10)+RTC_Data[3])-1;
   }
   else if(RTC_Data[2]==0)
   {
       m =RTC_Data[3]-1;
   }
   printf("%s\n",meses[m]);


   if(RTC_Data[4]!=0)
   {
       d=((RTC_Data[4]*10)+RTC_Data[5]);
   }
   else if(RTC_Data[4]==0)
   {
       d =RTC_Data[5];
   }

   printf("%d\n",d);

      if(RTC_Data[6]!=0||RTC_Data[6]>7)
   {
    
   }
   else if(RTC_Data[6]==0)
   {
       dn =RTC_Data[7]-1;
   }

   printf("%s\n",days[dn]);

   //if(RTC_Data[8]<=2)
   //{
  //  Output[0U]=RTC_Data[8]
   //}


   //Output[6U]=meses[m];


    return 0;
}
