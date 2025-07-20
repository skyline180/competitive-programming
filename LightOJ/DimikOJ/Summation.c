#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        int first_digit = N / 10000;
        int last_digit = N % 10;
        int sum = first_digit + last_digit;
        printf("Sum = %d\n", sum);
    }

    return 0;
}
