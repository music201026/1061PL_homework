#include <stdio.h>
int main (){
int a[3]={6,10,8},size = 3,t;
int *p; p=a; int*q; q = a+size -1;
while (p<=q)
{
    if (*p>*q) {t = *p; *p = *q; *q = t; p++; q--;}
    else p++; q--;
}
printf("%d",a[size-1]);
return 0;
}
