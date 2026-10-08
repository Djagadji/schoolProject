#include <stdio.h>

int main (void)
{
    double celsius = 0.0;
    double fahrenheit = 0.0;

    printf("Temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("%.1f C is %.1f F\n", celsius, fahrenheit);
    return 0;
   

}