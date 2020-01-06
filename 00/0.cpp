#include <stdio.h>

int main() {
    int integer1;
    int integer2;
    int integer3;
    int integer4;
    int sum;
    printf("Please enter the first integer:");
    scanf("%d",&integer1);
    printf("Please enter the second integer:");
    scanf("%d",&integer2);
    printf("Please enter the third integer:");
    scanf("%d",&integer3);
    printf("Please enter the third integer:");
    scanf("%d",&integer4);
    sum = integer1 + integer2 + integer3 + integer4;
    printf("Sum is %d.\n", sum);
    return 0;
    
}