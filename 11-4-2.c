#include <stdio.h>
int main (){
int count,times,number,base;
printf("How many sets of test data: ");
scanf("%d",&times);
    for (count = 0;count<times;count++)
    {
        printf("\nInput in what base (1) decimal (2) octal (3) hexadecimal: ");
        scanf("%d",&base);
        printf("Input a number: ");
        if (base==1)
        {
            scanf("%d",&number);
            printf("%d in decimal\n",number);
            printf("%o in octal, and\n",number);
            printf("%x in hexadecimal.\n",number);
        }
        else if (base==2)
        {
            scanf("%o",&number);
            printf("%d in decimal\n",number);
            printf("%o in octal, and\n",number);
            printf("%x in hexadecimal.\n",number);
        }
        else
        {
            scanf("%x",&number);
            printf("%d in decimal\n",number);
            printf("%o in octal, and\n",number);
            printf("%x in hexadecimal.\n",number);
        }
    }

return 0;
}
