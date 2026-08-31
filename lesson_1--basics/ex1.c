#include <stdio.h>

int main() {
    int celsius;
    int fahrenheit = celsius * 9 / 5 + 32;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    printf("%d Celsius is equal to %d Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}