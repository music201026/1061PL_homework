#include <stdio.h>
int main (){
int times,a,year,month,day;
char * monthName[12] = { "January", "February", "March", "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December" };
printf("How many times: ");
scanf("%d",&times);
    for(a = 0;a<times;a++)
    {
     printf("\nInput your birthday (year/month/day): ");
     scanf("%d/%d/%d",&year,&month,&day);
     printf("You were born in %s %d, %d.\n",monthName[month-1],day,year);
    }
return 0 ;
}
