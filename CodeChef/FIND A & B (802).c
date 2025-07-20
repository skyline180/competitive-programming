#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++){
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    
	    int A,B;
	    if(X!=Y && Y!=Z && X!=Z){
	        B=X;
	        A=Y*Z;
	        if(A%B==0){
	            printf("%d %d\n",A,B);continue;
	        }
	    }
	    if(X!=Y && Y!=Z && X!=Z){
	        B=Y;
	        A=X*Z;
	        if(A%B==0){
	            printf("%d %d\n",A,B);continue;
	        }
	    }
	    if(X!=Y && Y!=Z && X!=Z){
	        B=Z;
	        A=X*Y;
	        if(A%B==0){
	            printf("%d %d\n",A,B);continue;
	        }
	    }
	    
	        printf("-1\n");
	}
	
	return 0;
}

