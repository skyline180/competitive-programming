#include<stdio.h>
int main()
{
    int arr[5],max=0,min=0,sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);

        sum = sum + arr[i];
    }

    printf("%d",sum);
    //printf("%d %d",min,max);
    return 0;
}
