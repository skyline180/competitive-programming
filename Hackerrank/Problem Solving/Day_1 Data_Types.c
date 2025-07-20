#include <stdio.h>

int main()
{
    int i;
    double d;
    char s[100];

    //take user input
    scanf("%d",&i);
    scanf("%lf",&d);
     fflush(stdin);
    scanf("%[^\n]s",s);

    //operation
    int sum = i+(int)d;
    double sub = (double)i-d;

    printf("%d\n",sum);
    printf("%0.1lf\n",sub);
    printf("HackerRank %s",s);

    return 0;
}

