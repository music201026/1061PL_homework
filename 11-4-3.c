#include <stdio.h>
int main()
{
int count,times,day;
char * a[12] = {"first","second","third","fourth","fifth","sixth","seventh","eighth","ninth","tenth","eleventh","twelfth"};
printf("How many days do you want to know: ");
scanf("%d",&times);
    for (count = 0;count<times;count++)
    {
        printf("\nWhich day: ");
        scanf("%d",&day);
        printf("On the %s day of Christmas,\n",a[day-1]);
        printf("My true love gave to me\n");
        switch(day)
        {
            case 12:printf("Twelve drummers drumming,\n");
            case 11:printf("Eleven pipers piping,\n");
            case 10:printf("Ten lords a-leaping,\n");
            case 9:printf("Nine ladies dancing,\n");
            case 8:printf("Eight maids a-milking,\n");
            case 7:printf("Seven swans-a-swimming,\n");
            case 6:printf("Six geese a-laying,\n");
            case 5:printf("Five golden rings,\n");
            case 4:printf("Four calling birds,\n");
            case 3:printf("Three French hens,\n");
            case 2:printf("Two turtle doves, and\n");
            case 1:printf("A partridge in a pear tree.\n");
        }
    }
return 0 ;
}
