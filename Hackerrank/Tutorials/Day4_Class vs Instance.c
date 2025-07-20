#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    int age;
    for(int i=1;i<=T;i++){
        scanf("%d",&age);
/*
        if(age<0)
            printf("Age is not valid,setting age to 0.\n");
        else if(age<13)
            printf("You are young.\n");
        else if(age>=13 && age<18)
            printf("You are teenager.\n");
        else
            printf("Your are old.\n");
*/
    }

    for(int i=1;i<=T;i++){
        if(age<0)
            printf("Age is not valid,setting age to 0.\n");
        else if(age<13)
            printf("You are young.\n");
        else if(age>=13 && age<18)
            printf("You are teenager.\n");
        else
            printf("Your are old.\n");
    }

    return 0;
}
