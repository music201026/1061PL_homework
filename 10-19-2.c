#include <stdio.h>
int isLeapYear(year){
    if (year%400 == 0)
    {
        return 1 ;
    }
    if (year % 4 ==0 && year % 100 !=0)
    {
        return 1 ;
    }
    else {return 0;}
}

int isInvalidDate(year, month, day)
{
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeapYear(year))
    {
        mon[1]=29;
    }
    if (year<=0 || month<=0 ||day<=0 || day>mon[month-1] || month > 12)
    {
        return 1;
    }
    else {return 0;}
}
int main() {
    int ti, repeatTimes, year, month, day;
    printf("How many sets of test data: ");
    scanf("%d",&repeatTimes);
    for (ti = 0; ti < repeatTimes; ti++) {
        printf("\nInput a date (year/month/day): ");
        scanf("%d/%d/%d", &year, &month, &day);
        printf("%d/%d/%d %s a valid date.\n", year, month, day, isInvalidDate(year, month, day) ? "is not" : "is");
    }
    return 0;
}
