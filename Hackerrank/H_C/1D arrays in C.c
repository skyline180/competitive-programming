#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    // Dynamically allocate memory for the array
    int *arr = (int*)malloc(n * sizeof(int));
    
    if(arr == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    // Read values from stdin and store them in the array
    for(int i = 0;i < n; i++){
        scanf("%d",&arr[i]);
    }
    // Calculate the sum of all elements
    int sum = 0;
    for(int i = 0;i < n; i++){
        sum += arr[i];
    }
    // Print the sum
    printf("%d",sum);
    // Free the allocated memory
    free(arr);

    return 0;
}