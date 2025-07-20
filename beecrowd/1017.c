//BEE 1017 -Fuel Spent
#include <stdio.h>

int main()
{
    int t,s;
    scanf("%d %d",&t,&s);
    
    double l = ((double)s/12)*t;
    printf("%0.3lf\n",l);

    return 0;
}