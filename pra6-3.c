#include <stdio.h>
int main(){
int num,n = 1,i
double sum = 0;
    while(n>0)
    {
        printf("Input n (> 0): ");
        scanf("%d",&num);
        if (num%2!=0)
        {
            for (i = 1 ; i<=num ;i+2)
                printf("1/%d ",i);
                if (i==num) printf("=");
                else printf("+");
                sum =
        }
    }

return 0 ;
}
