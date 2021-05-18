#include <stdio.h>
int main (){
int n = 1,a,b,num;
    while (n>0)
    {
        printf("請輸入蘋果個數：");
        scanf("%d",&num);
        a = num/6;
        if (num%6>0) b = num/6 + 1;
        else b = a ;
        printf("如果零散的蘋果不裝箱，需要 %d 個箱子；\n",a);
        printf("如果零散的蘋果也要裝箱，則需要 %d 個箱子。\n",b);
    }


return 0 ;
}
