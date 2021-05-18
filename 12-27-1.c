#include <stdio.h>
#include <string.h>
int main (){
int i,times,num,result,j;
printf("How many sets of test data: ");
scanf("%d",&times);
    for(i = 0;i<times;i++)
    {
        printf("\nInput: ");
        scanf("%d",&num);
        printf("The 1 bits are at:");
        for (j = 0;j<32;j++)
        {
            if((num>>j)&1)printf(" %d",j);
        }
        printf("\n");
    }

return 0 ;
}
