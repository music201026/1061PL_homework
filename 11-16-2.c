#include <stdio.h>
int fb(int n);
int fa(int n)
{
    if (n==1)return 1;
    else return fa(n-1)+2*fb(n-1)+1;
}

int fb(int n)
{
    if (n==1)return 1 ;
    else return 3*fa(n-1)-fb(n-1)+1;
}

int main (){
int count,times,number,i;
printf("How many sets of test data: ");
scanf("%d",&times);
    for (count = 0 ;count<times ;count++)
    {
        i = 1;
        printf("\nWhat is the upper limit? ");
        scanf("%d",&number);
        while (fa(i)<=number&&fb(i)<=number)
        {
            printf("n = %d, (a, b) = (%d, %d)\n",i,fa(i),fb(i));
            i++;
        }
    }

return 0;
}
