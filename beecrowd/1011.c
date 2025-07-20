
#include<stdio.h>
int main()
{
    float R;
    double VOLUME;

    scanf("%f",&R);
    VOLUME = (4.0/3)*3.14159*(R*R*R);
    printf("VOLUME =  %0.3lf\n",VOLUME);

    return 0;
}

/*
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%i", &a);
    printf("VOLUME = %.3lf\n", (4 * 3.14159 * pow(a, 3)) / 3);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    float R;
    double VOlUME;
    scanf("%f",&R);
    VOlUME = (4.0/3)*3.14159*(R*R*R);
    printf("VOLUME = %0.3lf\n",VOlUME);
    return 0;
}
*/
