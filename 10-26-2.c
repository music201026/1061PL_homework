#include <stdio.h>
#include <math.h>
int prime(int n)
{int i;

 for(i=2;i<=sqrt(n);i++)

   if(n%i==0)return 0;

 return 1;
}
int main (){
int times,count,n,i,j;
printf("How many sets of test data: ");
scanf("%d",&times);
    for(count = 0;count < times ; count++ )
    {
        printf("\nInput a number (>= 6): ");
        scanf("%d",&n);
        for (i = 2 ; i<=n/3 ; i++)
        {
            for (j = i; j <= (n-i)/2 ;j++)
            {
                if (prime(i)&&prime(j)&&prime(n-i-j))
                {
                    printf("%d=%d+%d+%d\n",n,i,j,n-i-j);
                }
            }
        }

    }

return 0 ;
}
