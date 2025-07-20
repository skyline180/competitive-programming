#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long int D, L, R;
        scanf("%lld %lld %lld", &D, &L, &R);

        if (D >= L && D <= R) {
            printf("Take second dose now\n");
        } else if (D < L) {
            printf("Too Early\n");
        } else {
            printf("Too Late\n");
        }
    }

    return 0;
}
