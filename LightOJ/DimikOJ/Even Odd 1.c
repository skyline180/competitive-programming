#include <stdio.h>

int main()
{
    int T,N;
    scanf("%d",&T);

    for(int i=1;i<=T;i++){
        scanf("%d",&N);
        if(N%2==0){
            printf("even\n");
        }
        else if(N%2!=0){
            printf("odd\n");
        }
    }

    return 0;
}

