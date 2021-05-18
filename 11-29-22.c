#include <stdio.h>
void del (char *a[],int b)
{
    char *p;
    p = a;
    while (*p!='\0')
    {
        printf("[%s]\n",p);
        p = p+b ;
    }
}
int main (){
int times,count,skip;
printf("How many sets of test data: ");
scanf("%d",&times); getchar();
    for (count = 0;count<times;count++)
    {
         char sent[300]={0};
         printf("\nInput a string: ");
         gets(sent);
         printf("Skipping = ");
         scanf("%d",&skip); getchar();
         del(sent,skip);

    }
return 0 ;
}
