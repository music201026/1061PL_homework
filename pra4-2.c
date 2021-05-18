#include <stdio.h>
int main (){
int num,m = 1,group;
    while (m>0)
    {
        printf("請輸入座號：");
        scanf("%d",&num);
        if (num%5==0) group = num/5;
        else group  = (num/5) +1;
        printf("你在第 %d 組。\n",group);
    }

return 0 ;
}
