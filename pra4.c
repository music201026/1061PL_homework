#include <stdio.h>
int main (){
int n = 1,a,b,num;
    while (n>0)
    {
        printf("�п�Jī�G�ӼơG");
        scanf("%d",&num);
        a = num/6;
        if (num%6>0) b = num/6 + 1;
        else b = a ;
        printf("�p�G�s����ī�G���˽c�A�ݭn %d �ӽc�l�F\n",a);
        printf("�p�G�s����ī�G�]�n�˽c�A�h�ݭn %d �ӽc�l�C\n",b);
    }


return 0 ;
}
