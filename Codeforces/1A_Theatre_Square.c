#include <stdio.h>
#include <math.h>
int main(){
    double n, m, a;
    scanf("%lf %lf %lf", &n, &m, &a);
    printf("%lld\n", (long long) ceil(n/a)* (long long) ceil(m/a));
}
