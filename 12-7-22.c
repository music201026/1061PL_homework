#include <stdio.h>
char * myStrRchr(char * sentence, char c)
{
   char *p =sentence;
   while (*p!='\0') p++;
   while(p>=sentence)
   {
       if (*p==c) return p;
       p--;
   }
   return sentence;
}
int main (){
char input[1000],symbol,*p=input;
int ti,repeat;
printf("How many sets of test data: ");
scanf("%d",&repeat);getchar();
    for(ti=0;ti<repeat;ti++)
    {
        printf("\nInput a string: ");
        gets(input);
        printf("Divided by what symbol: ");
        scanf("%c",&symbol);getchar();
        printf("Results:\n");//printf("[%s]\n",input);
        do
        {
            printf("[%s]\n",input);
            * myStrRchr(input,symbol) = '\0';
        }while(input[0]!='\0');
        printf("[%s]\n",input);
    }
return 0;
}
