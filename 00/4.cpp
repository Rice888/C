#include <stdio.h>
int main()
{
    int num, num1, num2;
    printf("Please enter the first integer:");
    scanf("%d", &num);
    printf("Please enter the second integer:");
    scanf("%d", &num1);
    printf("Please enter the third integer:");
    scanf("%d", &num2);
    // double average = (num + num1 + num2) / (double) 3;//强制转型
    double average = (num + num1 + num2) / 3.;//隐形转型 加. 
    // float average = (num + num1 + num2) / 3.;//头部转型权限最大.
    printf("Average is %f\n", average);
    return 0;
}