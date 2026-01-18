#include <stdio.h>

int sequence_calc(int n)
{
    if (n == 0)
        return 0;
        
    if (n % 3 == 0)
        return sequence_calc(n / 3) + 1;
    else if (n % 3 == 1)
        return sequence_calc(n - 1) * 2;
    else
        return sequence_calc(n - 2) + 1;
}

int main(void)
{
    int n;

    printf("Podaj nieujemna liczbe calkowita n: ");
    scanf("%d", &n);

    printf("Wynik: %d\n", sequence_calc(n));

    return 0;
}