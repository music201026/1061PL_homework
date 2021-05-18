#include <stdio.h>
char * myStrRchr(char * sentence, char c)
{
   char *p =sentence;
   while (*p!='\0')p++;
   p--;
   if (sentence==NULL)return NULL;
   while(p>=sentence)
   {
       if (*p==c)return p;
       p--;
   }
   return NULL;
}
int main (){
    char input[1000],symbol,*p;
    int ti,repeat;
    printf("How many sets of test data: ");
    scanf("%d",&repeat);getchar();
    for(ti=0;ti<repeat;ti++)
        {
            printf("\nInput a string: ");
            gets(input);
            printf("Divided by what symbol: ");
            symbol= getchar();
            printf("Results:\n");
            printf("[%s]\n",input);
            p = myStrRchr(input,symbol);
            while(p!= NULL)
            {
                *p = '\0';
                printf("[%s]\n",input);
                p = myStrRchr(input,symbol);
            }
            getchar();
        }
    return 0;
}
