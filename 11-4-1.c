#include <stdio.h>
#include <math.h>
int main (){
    unsigned int numU;
    int count,times,n,i;
    printf("How many sets of test data: ");
    scanf("%d",&times);
    for (count = 0;count<times;count++)
    {
        printf("\nPlease input a large integer: ");
        scanf("%u",&numU);
        printf("Please input an interval: ");
        scanf("%d",&n);
        printf("Your input is [%u]\n",numU);
        printf("Its next 10 numbers by adding %d are:\n",n);
        for (i = 0;i<10;i++)
        {
            numU = numU + n ;
            printf("%u\n",numU);
        }
        printf("Over!!\n");
    }
return 0 ;
}
