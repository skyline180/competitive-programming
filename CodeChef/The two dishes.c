#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while(T--){
        int N,S;
        scanf("%d %d",&N,&S);

        if(N<S){
            printf("%d\n",S-N);
        }else if(N>S){
            printf("%d\n",S);
        }else if(N==S){
            printf("%d\n",N);
        }

    }

    return 0;
}

