#include <stdio.h>
#include <string.h>
struct myDateData { int year, month, day; };
typedef struct myDateData DateData;
struct StudentInfo { int seatNo;char name[20];DateData birthdate; };
typedef struct StudentInfo stuinfo;
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
int main (){
    int stunum,i,low,up,min;
    printf("How many students? ");
    scanf("%d",&stunum);
    stuinfo stu[stunum];
    for (i = 0;i<stunum ;i++)
    {
        printf("student[%d].seatNo: ",i);
        scanf("%d",&stu[i].seatNo); getchar();
        printf("student[%d].name: ",i);
        gets(stu[i].name);
        printf("student[%d].birthdate: ",i);
        getdate(&stu[i].birthdate);
    }
    printf("Lower range: ");
    scanf("%d",&low);
    printf("Upper range: ");
    scanf("%d",&up);
    min = low;
    for (i = low;i<=up;i++)
    {
        if(datecmp(stu[min].birthdate,stu[i].birthdate)==-1) min = i;
    }
    printf("The youngest student from student[%d] to student[%d] is:\n%s, No. %d, whose birthdate is %d/%d/%d.\n",low,up,stu[min].name,stu[min].seatNo,stu[min].birthdate.year,stu[min].birthdate.month,stu[min].birthdate.day);
return 0 ;
}


