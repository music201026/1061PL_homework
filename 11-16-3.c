#include <stdio.h>
int fa(int k,int m,int n,int s,int t)
{
    if (k==0)return 0;
    else if (k%2!=0) return m*fa(k-1,m,n,s,t)+n;
    else return s*fa(k-1,m,n,s,t)+t;
}

int main(){
int count,times,m,n,s,t,index,i;
printf("How many sets of test data: ");
scanf("%d",&times);
    for (count = 0;count<times;count++)
    {
        printf("\nm = ");
        scanf("%d",&m);
        printf("n = ");
        scanf("%d",&n);
        printf("s = ");
        scanf("%d",&s);
        printf("t = ");
        scanf("%d",&t);
        printf("Final index = ");
        scanf("%d",&index);
        for (i = 0;i<index+1;i++)
        {
            printf("a_%d = %d\n",i,fa(i,m,n,s,t));
        }
    }

return 0 ;
}
