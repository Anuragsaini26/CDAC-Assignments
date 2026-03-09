#include <stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    float c = 37.0, f = 98.6;

    printf("Celsius to Fahrenheit: %.2f\n", celsiusToFahrenheit(c));
    printf("Fahrenheit to Celsius: %.2f\n", fahrenheitToCelsius(f));

    return 0;
}

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}