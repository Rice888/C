#include <stdio.h>
int main()
{
    int integer1, integer2;
    printf("Please enter the first integer:");
    scanf("%d", &integer1); //4
    printf("Please enter the second integer:");
    scanf("%d", &integer2); //5

    int temp = integer1; // 存储 1
    integer1 = integer2; // 1 = 2
    integer2 = temp;     //2 = temp 1;

    /*
    integer1 = integer1 + integer2; // i1 9 = 4 + 5 2还是5
    integer2 = integer1 - integer2; // i1 9 - 5 = 4;
    integer1 = integer1 - integer2; // 9 - 4 = 5
    */
   
    printf("integer1: %d\n", integer1); //5
    printf("integer2: %d\n", integer2); //4
    return 0;
}