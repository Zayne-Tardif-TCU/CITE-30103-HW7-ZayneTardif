#include <stdio.h>

float toCelsius(float f)
{
    return (f - 32.0f) * 5.0f / 9.0f;
}

int main(void)
{
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = toCelsius(f);

    printf("Temperature in Celsius: %.2f\n", c);

    return 0;
}
