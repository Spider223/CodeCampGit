#include <stdio.h>

int main()
{
    // float percent;
    // char A, B,C,D,E,f;
    int i;

    printf("Enter your percentage : ");
    scanf("%d", &i);

    if (i >= 90)
    {
        printf("A+");
    }
    else if (i >= 80 && i < 90)
    {
        printf("A");
    }
    else if (i >= 70 && i < 80)
    {
        printf("B");
    }
    else if (i >= 60 && i < 70)
    {
        printf("C");
    }
    else if (i >= 60 && i < 50)
    {
        printf("D");
    }
    else if (i >= 50 && i < 40)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }

    return 0;
}