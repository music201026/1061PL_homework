#include <stdio.h>

char sent[300];
int main (){
int times,count,i;
printf("How many sets of test data: ");
scanf("%d",&times);getchar();
char *p;
    for(count = 0;count<times;count++)
    {
        p = sent ;
        printf("\nInput a line:");
        gets(sent);
        while (*p!='\0')
            {
                if (*p!='.' && *p!='%'&& !(*p>='0' && *p<='9' ))
                {
                    *p =  '_';
                }
                    p++;
            }

        printf("\nModified line:\n");
        printf("%s\n",sent);

    }

return 0;
}
