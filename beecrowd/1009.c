#include<stdio.h>
int main()
{
    char name[10];
    float salary;
    double sales,total;

    scanf("%s %f %lf",&name,&salary,&sales);
    total = salary + (sales * 0.15);

    printf("TOTAL = R$ %0.2lf\n",total);

    return 0;
}
