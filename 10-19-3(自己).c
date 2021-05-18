#include <stdio.h>
int main (){
int count,times,year,month,day;
printf("How many sets of test data: ");
scanf("%d",&times);
    for(count = 0;count<times;count++)
    {
        printf("\nInput a date (year/month/day): ");
        scanf("%d/%d/%d",&year,&month,&day);
        if (year>0 && month>0 && day>0)
        {
            if (month == 2)
            {
                if (year % 400 ==0)
                {
                    printf("%d/%d/%d %s a valid date.\n", year, month, day);
                }
                else if (year % 4 ==0 && year % 100 !=0)
                {
                    printf("%d/%d/%d is a valid date.\n", year, month, day);
                }
                else
                {
                    printf("%d/%d/%d is not a valid date.\n",year, month , day);
                }
            }
            else
            {
                printf("%d/%d/%d is a valid date.\n",year,month,day);
            }
        }
        else
        {
            printf("%d/%d/%d is not a valid date.\n",year, month , day);
        }
    }
return 0 ;
}
