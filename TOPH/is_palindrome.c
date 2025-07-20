#include <stdio.h>
#include<string.h>
int main()
{
    char S[100];
        gets(S);
    char revStr[20];
    int n=strlen(S);
    int i;
    for(i=0;i<n;i++){
        revStr[i]=S[n-1-i];
    }

    if(strcmp(S,revStr)==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}


