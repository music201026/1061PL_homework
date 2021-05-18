#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main ()
{
int n,times,i = 0;
double result1,result2;
printf("n =");
scanf("%d",&n);
    for (times = 0 ; times <= 2*n ; times++)
    {
        result1 = sin (i / n * PI / 180);
        result2 = cos (i / n * PI / 180);
        printf("x = %d/%d*PI, sin(x) = %f, cos(x) = %f",times,n,result1,result2);
        printf("\n");
        i++;
    }

return 0 ;
}
