#include <stdio.h>

int main() {
    int num;
// Solicitar al usuario ingresar un número
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    // Verificar si el número ingresado es primo
    if (esPrimo(num)) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }


    return 0;
}

int esPrimo(int num) {
    if (num <= 1) {
        return 0;  // 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  