#include <stdio.h>
int main (){
int times,count = 0,b,j = 0,c,time = 0;
printf("How many times: ");
scanf("%d",&times);
printf("\n");
    while (count<times)
    {
        time = 0;
        printf("How many elements: ");
        scanf("%d",&b);
        int a[b];
        printf("Numbers in this array: ");
        for(j=0;j<b;j++)
        {
             scanf("%d",&a[j]);
        }
        printf("Give me a number: ");
        scanf("%d",&c);

        for(j=0;j<b;j++)
        {
           if (a[j]%c!=0) time++;
        }
        if (time==b) {printf("No %d's multiple in a[].\n",c);}
        else printf("%d's multiples in a[] are: \n",c);
        for(j = 0;j<b;j++)
        {
               if (a[j]%c==0)
               {
                printf("a[%d], whose value is %d",j,a[j]);
                printf("\n");
               }

        }
        printf("\n");
        count++;
    }
return 0 ;
}
