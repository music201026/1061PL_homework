#include <stdio.h>
int factorial (int n)
{
    if (n<=1) return 1 ;
    else return n*factorial(n-1);
}

int main (){
int n,a = 1;
    while (a>0)
    {
        printf("Input :");
        scanf("%d",&n);
        printf("%d\n",factorial(n));
    }
return 0;
}
