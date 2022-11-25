#include <conio.h>
#include <stdio.h>

int main(void)
{
    float a;
    printf("A:");
    scanf_s("%f", &a);

    int n;
    printf("N:");
    scanf_s("%i", &n);

    float a2 = 1, rez = 1;
    int i;

    for (i = 2; i <= n; ++i)
    {
        a2 *= -a;
        rez += a2;
    }
    printf("%f \n ", rez);
    return 0;
}