#include <stdio.h>
int main (){
int num,m = 1,group;
    while (m>0)
    {
        printf("�п�J�y���G");
        scanf("%d",&num);
        if (num%5==0) group = num/5;
        else group  = (num/5) +1;
        printf("�A�b�� %d �աC\n",group);
    }

return 0 ;
}
