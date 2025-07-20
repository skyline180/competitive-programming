//BEE 1020 -Age in Days
#include <stdio.h>

int main()
{
    int N,y,m,d;
    scanf("%d",&N);
    
    //calculation
    y = (N/365);
    m = (N -(365*y))/30;
    d = (N -(365*y)-(m*30));
    
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);

    return 0;
}
