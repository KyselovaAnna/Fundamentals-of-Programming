#include <stdio.h>
int main()
{
    int a;
    float b;

    printf("Enter integer and then a float: ");

    // Taking multiple inputs
    scanf_s("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);
    return 0;
}
