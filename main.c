#include <stdio.h>

int main() {

    char choise = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature conversion program");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to Celcius\n");
    printf("Is the temp is in Celcius(C) or Fahrenheit(F): ");
    scanf("%c", &choise);

    if(choise == 'C') {
        printf("Enter the temperature in Celcius");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celcius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    } else if (choise == 'F') {
        printf("Enter the temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celcius\n", fahrenheit, celsius);
    } else {
        printf("Invalid choise! Please select C or F\n");
    }

    return 0;
}