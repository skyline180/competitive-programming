#include <stdio.h>
#include <string.h>

int main() {
    char ch,s[100],sen[100];

    scanf("%c",&ch);
    scanf("s",s);
    scanf("%[^\n]%*c",sen);

    printf("%c",ch);
    printf("%s",s);
    printf("%s",sen);

    return 0;
}

