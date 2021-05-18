#include <stdio.h>
void sort3(int *a,int *b,int *c)
{
    int temp;
    if(*a>*b){temp=*a;*a=*b;*b=temp;}
    if(*a>*c){temp=*a;*a=*c;*c=temp;}
    if(*b>*c){temp=*b;*b=*c;*c=temp;}
}
int main() {
    int x, y, z, ti, repeatTimes;
    printf("How many sets of test data: ");
    scanf("%d",&repeatTimes);
    for (ti = 0; ti < repeatTimes; ti++) {
        printf("\nPlease input three numbers: ");
        scanf("%d%d%d", &x, &y, &z);
        sort3(&x,&y,&z);
        printf("Results after sorting: %d, %d, %d\n", x, y, z);
    }
    return 0;
}
