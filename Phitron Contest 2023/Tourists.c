
#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while(T--){
        int N;  // the number of available rooms
        scanf("%d",&N);

        for(int i=1;i<=N;i++){
            scanf("%d ",&i);    //the floor number xi of the available rooms
        }

        int C;  //the number tourists.
        scanf("%d",&N);


        printf("%d\n",N-C);
    }

    return 0;
}

