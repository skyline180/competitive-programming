#include<stdio.h>
int main()
{
    int employee_num,work_hour;
    float salary;

    scanf("%d %d %f",&employee_num,&work_hour,&salary);

    printf("NUMBER = %d\n",employee_num);
    printf("SALARY = U$ %0.2lf\n",(work_hour*salary));

    return 0;
}
