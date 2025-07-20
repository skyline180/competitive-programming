//Primality test
#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }

    int root = sqrt(n);

    for(int i=3;i<=root;i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int T,N;
    scanf("%d",&T);

    for(int i=1;i<=T;i++){
        scanf("%d",&N);

        //test prime
        if(N==0){
            return 0;
        }
        if(1==is_prime(N)){
            printf("prime\n");
        }
        else{
            printf("composite\n");

        }
    }
    return 0;
}

//could not submit
