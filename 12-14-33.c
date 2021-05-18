#include <stdio.h>
#include <string.h>
struct myDateData { int year, month, day; };
typedef struct myDateData DateData;
void getdate(DateData *d)
{
    scanf("%d/%d/%d",&d->year,&d->month,&d->day);
}
int datecmp(DateData date1, DateData date2)
{
    if (date1.year==date2.year&&date1.month==date2.month&&date1.day==date2.day)return 0 ;
    else if (date1.year>date2.year) return 1;
    else if (date1.year==date2.year&&date1.month>date2.month) return 1 ;
    else if (date1.year==date2.year&&date1.month==date2.month&&date1.day>date2.day) return 1 ;
    else return -1;
}
int main() {
    DateData myDate1, myDate2;
    int ti, repeatTimes, rpTimes;
    printf("How many sets of test data: ");
    scanf("%d",&repeatTimes);
    for (ti = 0; ti < repeatTimes; ti++) {
        printf("\nInput the first date (year/month/day): ");
        getdate(&myDate1);
        printf("Input the second date (year/month/day): ");
        getdate(&myDate2);
        int result = datecmp(myDate1,myDate2);
        printf("%d-%02d-%02d ",myDate1.year,myDate1.month,myDate1.day);
        if (result ==1) printf(">"); else if (result ==-1)printf("<"); else printf("=");
        printf(" %d-%02d-%02d\n",myDate2.year,myDate2.month,myDate2.day);
    }
    return 0;
}
