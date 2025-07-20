#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while(T--){
        long long int A,B;
        scanf("%lld %lld",&A,&B);

        long long int product = A*B;
        int last_two_digit = product % 100;

        printf("%d\n",last_two_digit);
    }

    return 0;
}

