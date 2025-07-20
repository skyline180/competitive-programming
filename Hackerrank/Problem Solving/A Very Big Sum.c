#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);  //take array size
    
    long int ar[n],bigSum=0;   //declare array and initialize sum variable
    
    //take arary input
    for(i=0;i<n;i++){
        scanf("%ld",&ar[i]);
        
        bigSum = bigSum + ar[i];
    }
    
    printf("%ld ",bigSum);

    return 0;
}
