#include<stdio.h>
#include<string.h>
int main (){
    char mystring[1000],punc[100],*p;
    printf("Input a string: ");
    gets(mystring);
    printf("Divided by what symbols: ");
    gets(punc);
    p = strtok(mystring,punc);
        while (p!=NULL)
        {
            printf("[%s] length = %d\n",p,strlen(p));
            p = strtok(NULL,punc);
        }
    return 0 ;
}
