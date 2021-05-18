#include <stdio.h>
int checkA (int n1[],int n2[])
{
    int a = 0,i,j;
    for (i = 0 ; i<4 ; i++)
    {
        for (j = 0 ; j<4 ;j++)
        if (n1[i]==n2[j]&&i==j) a++;
    }
    return a ;
}
int checkB (int n1[],int n2[])
{
    int b = 0,i,j;
    for (i = 0 ; i<4 ; i++)
    {
        for (j = 0 ; j<4 ;j++)
        if (n1[i]==n2[j]&&j!=i) b++;
    }
    return b ;
}

int main() {
    int ti, repeatTimes, number1[4], number2[4];
    printf("How many sets of test data: ");
    scanf("%d",&repeatTimes);
    for (ti = 0; ti < repeatTimes; ti++) {
        printf("\nInput number 1: "); scanf("%1d%1d%1d%1d", &number1[0], &number1[1], &number1[2], &number1[3]);
        printf("Input number 2: "); scanf("%1d%1d%1d%1d", &number2[0], &number2[1], &number2[2], &number2[3]);
        int A = checkA(number1, number2);
        int B = checkB(number1, number2);
        printf("%d%d%d%d vs. %d%d%d%d is %d-A-%d-B\n",
                number1[0], number1[1], number1[2], number1[3],
                number2[0], number2[1], number2[2], number2[3],
                A, B );
    }
    return 0;
}
