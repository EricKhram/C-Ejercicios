#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <math.h>

void areacirculo() { // Función principal
    float radio = 2.5; // Declara una variable float 'radio' y le asigna el valor 2.5
    float area = 3.1416 * radio * radio; // Calcula el área del círculo usando la fórmula πr²
    printf("El área de un círculo de radio %.2f es %.2f\n", radio, area); // Imprime el resultado en pantalla
}

void grados() {
    float celsius, fahrenheit;
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%f grados Celsius equivalen a %f grados Fahrenheit.\n", celsius, fahrenheit);
}

void promedio() {
    float num1, num2, num3, promedio;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%f", &num3);
    promedio = (num1 + num2 + num3) / 3;
    printf("El promedio de %.2f, %.2f y %.2f es: %.2f\n", num1, num2, num3, promedio);
}

void mayormenor() {
    float num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    if (num1 > num2) {
        printf("%.2f es mayor que %.2f\n", num1, num2);
    } else if (num2 > num1) {
        printf("%.2f es mayor que %.2f\n", num2, num1);
    } else {
        printf("Ambos números son iguales: %.2f = %.2f\n", num1, num2);
    }
}

void raiz() {
    float num, raiz;
    printf("Ingrese un número: ");
    scanf("%f", &num);
    if (num < 0) {
        printf("Error: no se puede calcular la raíz cuadrada de un número negativo.\n");
    } else {
        raiz = sqrt(num); // calcular raíz cuadrada
        printf("La raíz cuadrada de %.2f es: %.2f\n", num, raiz);
    }
}

int main() {
    // para ejecutar cualquier ejercicio borrar comentario '//'
    // areacirculo();
    // grados();
    // promedio();
    // mayormenor();
    /*
    para ejecutar raiz
    primero quitar comentario
    luego ejecutar desde una nueva terminal los siguientes 3 comandos
    cd /workspaces/C-Ejercicios/Estructuras/float
    gcc ejercicios.c -o ejercicios -lm
    ./Ejercicios
    */ 
    // raiz();
}
