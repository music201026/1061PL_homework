#include <stdio.h>
int gcd(int a,int b)
{
    if (a%b==0) return b;
    else return gcd(b,a%b);

}
int main (){
int count,times,a,b;
printf("How many sets of test data: ");
scanf("%d",&times);
    for (count = 0 ;count<times ;count++)
    {
        printf("\na = ");
        scanf("%d",&a);
        printf("b = ");
        scanf("%d",&b);
        printf("GCD(%d, %d) = %d\n",a,b,gcd(a,b));
    }

return 0 ;
}
