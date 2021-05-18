#include  <stdio.h>
int main (){
int times,count = 0,i;
printf("How many times: ");
scanf("%d",&times);
    while (count<times)
    {
    printf("Input a number: ");
    scanf("%d",&i);
    printf("Reverse: ");
        while(i!=0)
        {
        printf("%d",i%10);
        i=i/10;
        }
    printf("\n");
    count++;
    }
return 0 ;
}
