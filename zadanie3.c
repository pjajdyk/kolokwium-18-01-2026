#include <stdio.h>

int calculate_score(const char *str)
{
    int sum = 0;  
    int multiplier = 1;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            sum += (*str) * multiplier;
        }
        else if (*str >= '0' && *str <= '9')
        {
            multiplier = -multiplier;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            sum = 0;
        }

        str++;
    }
    return sum;
}

int main(void)
{
    char text[256];

    printf("Podaj lancuch znakow: ");
    fgets(text, sizeof(text), stdin);

    printf("Wynik: %d\n", calculate_score(text));

    return 0;
}