include <stdio.h>
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    int choice;
    float value;
    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("Choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter Celsius value: ");
            scanf("%f", &value);
            printf("%.1f C = %.1f F\n", value, celsiusToFahrenheit(value));
            break;
            
        case 2:
            printf("Enter Fahrenheit value: ");
            scanf("%f", &value);
            printf("%.1f F = %.1f C\n", value, fahrenheitToCelsius(value));
            break;
            
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}

float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}
