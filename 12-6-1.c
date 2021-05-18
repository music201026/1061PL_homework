#include <stdio.h>
#include <string.h>
void duplicateStr(char dest[], char *src, int n){
    int i;
    if (n<=0) dest[0]='\0';
    else
    {
        strcpy(dest,src);
        for (i = 0;i<n-1;i++)
        {
            strcat(dest,src);
        }
    }
}
int main() {
    char newStr[1000], inputStr[1000];
    int ti, repeatTimes,rpTimes;
    printf("How many sets of test data: ");
    scanf("%d",&repeatTimes); getchar();
    for (ti = 0; ti < repeatTimes; ti++) {
        printf("\nInput a string: ");
        scanf("%s",inputStr);getchar();
        printf("Duplicate how many times: ");
        scanf("%d",&rpTimes);getchar();
        duplicateStr(newStr, inputStr, rpTimes);
        printf("The new string is [%s]\n", newStr);
    }
    return 0;
}
