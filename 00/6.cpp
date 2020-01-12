#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Please enter three side: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side2)
    {
        if (side2 == side3)
        {
            printf("Regular triangle\n");
        }
    }else
    {
    printf("It's not Regular triangle\n");
    }
    


    return 0;
}