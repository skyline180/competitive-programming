#include<stdio.h>
int main()
{
    float A,B,C;
    float triangle,circle,trapezium,square,rectangle;
    scanf("%f %f %f",&A,&B,&C);

    triangle = 0.5 * A * C;
        printf("TRIANGULO: %.3f\n",triangle);
    circle = 3.14159 * C * C;
        printf("CIRCULO: %.3f\n",circle);
    trapezium = ((A + B) / 2) * C;
        printf("TRAPEZIO: %.3f\n",trapezium);
    square = B * B;
        printf("QUADRADO: %.3f\n",square);
    rectangle = A * B;
        printf("RETANGULO: %.3f\n",rectangle);

    return 0;
}
