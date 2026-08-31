#include <stdio.h>

void converterParaCelsius (int fahrenheit) {
    
    while (true) {

        int celsius = (fahrenheit - 32) * 5 / 9;
        printf("%d Fahrenheit é igual a %d Celsius\n", fahrenheit, celsius);
    }

}