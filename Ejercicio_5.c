#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base = 2, exponente = 5;
    printf("%d elevado a la %d es: %d\n", base, exponente, potencia(base, exponente));
    return 0;
}
nz