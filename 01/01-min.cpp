#include <stdio.h>
int main()
{
    int a,b,c, min;
    printf("Please enter the number:");
    scanf("%d%d%d", &a,&b,&c);
    min = a;
    if(b < min){
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    printf("This is min number %d",min);
    return 0;
}