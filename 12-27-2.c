#include <stdio.h>
#include <string.h>
int main(){
int i,num,times,po;
printf("How many sets of test data: ");
scanf("%d",&times);
    for(i = 0;i<times;i++)
    {
        printf("\nNumber: ");
        scanf("%d",&num);
        printf("Position: ");
        scanf("%d",&po);
        num = num>>po;
        printf("It is a %d bit.\n",num&1?1:0);
    }
return 0 ;
}
