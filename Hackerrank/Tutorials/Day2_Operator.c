#include <stdio.h>
#include <math.h>

int main()
{
    float meal_cost;
    int tip_percent;
    int tax_percent;

    scanf("%f %d %d",&meal_cost,&tip_percent,&tax_percent);

    float total = meal_cost + meal_cost*((float)tip_percent/100) + meal_cost*((float)tax_percent/100);
    total = round(total);
    printf("%d",(int)total);

    return 0;
}
