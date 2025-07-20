//BEE 1018 -Banknotes
#include <stdio.h>

int main()
{
    int N,m;
    scanf("%d",&N);
    
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",N/100);
    m=N%100;
    printf("%d nota(s) de R$ 50,00\n",m/50);
    m=m%50;
    printf("%d nota(s) de R$ 20,00\n",m/20);
    m=m%20;
    printf("%d nota(s) de R$ 10,00\n",m/10);
    m=m%10;
    printf("%d nota(s) de R$ 5,00\n",m/5);
    m=m%5;
    printf("%d nota(s) de R$ 2,00\n",m/2);
    m=m%2;
    printf("%d nota(s) de R$ 1,00\n",m/1);
    
    return 0;
}

