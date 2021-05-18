#include <stdio.h>
#include <string.h>
int main(){
char*str="abcdefghijk",t;
printf("%s\n",str);
char*p=str; char*q=str;
q += strlen(str)-1;
while(p<q)
{
    t = *p;
    *p = *q;
    *q = t;
    p++; q--;
}
printf("%s",str);
return 0;
}
