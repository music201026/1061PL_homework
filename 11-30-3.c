#include <stdio.h>
void reverseCase(char  newStr[], char *orgStr)
{
   char *o; o = orgStr; char* n; n = newStr ;
    while (*o!='\0')
    {
        if (*o>='a'&& *o<='z') *n = *o - 'a'+ 'A' ;
        else if (*o>='A'&& *o<='Z') *n = *o +32 ;
        else *n = *o;
        o++ ; n++;
    }
}

int main() {
    int ti, repeatTimes;
    printf("How many sets of test data: ");
    scanf("%d",&repeatTimes);getchar();
    for (ti = 0; ti < repeatTimes; ti++)
    {
        char newStr[1000]={'\0'}, orgStr[1000]={'\0'};
        printf("\nInput a string: ");
        gets(orgStr);
        reverseCase(newStr, orgStr);
        printf("The new string is [%s]\n", newStr);
    }
    return 0;
}


