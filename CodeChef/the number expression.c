#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Test case
    
    while(t--){
        long long int X,Y,Z;
        scanf("%lld %lld %lld", &X, &Y, &Z);
        
        if(X+Y-Z==0 || X-Y+Z==0 || X-Y-Z==0 ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}
