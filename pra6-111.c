#include <stdio.h>
void t(int a, int b)
{
    if (a==0||b==0)printf("Number can not be 0.\n");
    while (a>0&&b>0)
    {
        if (a>b) a = a%b ;
        else b = b%a;
    }
    if (a==0) printf("程そ计:%d\n",b);
    else printf("程そ计:%d\n",a);
}

int main(){
int a,b,n = 1;
    while (n>0)
    {
        printf("Input1:");
        scanf("%d",&a);
        printf("Input2:");
        scanf("%d",&b);
        t(a,b);
    }
return 0 ;
}
