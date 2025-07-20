#include <stdio.h>

int compareTriplets(a,b){
    if(a[i]>b[i]){
            //a get 1 point
        }
        if(a[i]==b[i]){
            //nobody get point
        }
        if(a[i]<b[i]){
            //b get 1 point
        }
}

int main()
{
    int a[3],b[3],i;
    
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    
    printf("%d",compareTriplets());
    
    return 0;
}
