#include <stdio.h> 

int number_simulation(int n)
{
    int steps = 0;

    while (n >= 10)
    {
        int last_digit = n % 10;

        if (last_digit >= 0 && last_digit <= 3)
        {
            n += last_digit * 2;
        }
        else if (last_digit >= 4 && last_digit <= 6)
        {
            n -= 3;
        }
        else
        {
            n /= 2;
        }
        steps++;
    }
    return steps;
}

int main(void)
{
    int n;

    printf("Podaj dodatnia liczbe startowa: ");
    scanf("%d", &n);

    int result = number_simulation(n);

    printf("Liczba krokow: %d\n", result);

    return 0;
}