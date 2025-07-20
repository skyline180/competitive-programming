#include <stdio.h>

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);  //take array size
    
    int ar[n];   //declare array
    
    //take arary input
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        
        sum = sum + ar[i];
    }
    
    printf("%d ",sum);

    return 0;
}
