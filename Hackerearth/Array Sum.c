#include <stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);  //take array size

    long int A[N],Sum=0;   //declare array and initialize sum variable

    //take arary input
    for(i=0;i<N;i++){
        scanf("%ld",&A[i]);

        Sum = Sum + A[i];
    }

    printf("%ld ",Sum);

    return 0;
}
