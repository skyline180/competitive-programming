/*
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    int arr[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
/*-----------------------------------------------------------------*/
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);

    int arr[n][n];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
