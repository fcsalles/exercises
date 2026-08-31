#include <stdio.h>
#include <math.h>

void calcularAreaEsfera (float raio) {
    
    while (true) {
    float area = 4 * M_PI * pow(raio, 2);
    printf("A área da esfera com raio %.2f é %.2f\n", raio, area);
    }

}