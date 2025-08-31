#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <math.h>

void ejemplo() { // Función principal
    double x = 3.1415926535; // Declara una variable double 'x' y le asigna un valor
    double y = 2.7182818284; // Declara una variable double 'y' y le asigna un valor
    double suma = x + y; // Declara una variable 'suma' y almacena la suma de 'x' y 'y'
    printf("La suma de %.10f y %.10f es %.10f\n", x, y, suma); // Imprime el resultado en pantalla
}

void pileibniz() {
    int n, limite = 1000;
    double pi = 0.0;
    for (n = 0; n < limite; n++) {
        pi += (n % 2 == 0 ? 1.0 : -1.0) / (2.0 * n + 1.0);
    }
    pi *= 4.0;
    printf("Valor aproximado de pi con %d terminos: %.15f\n", limite, pi);
}

void sumadouble() {
    double num1, num2, suma;
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);
    suma = num1 + num2;
    printf("La suma de %.10lf y %.10lf es: %.10lf\n", num1, num2, suma);
}

void promedio() {
    double num1, num2, num3, num4, num5, promedio;
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%lf", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%lf", &num4);
    printf("Ingrese el quinto numero: ");
    scanf("%lf", &num5);
    promedio = (num1 + num2 + num3 + num4 + num5)/5;
    printf("el promedio de %.10lf, %.10lf, %.10lf, %.10lf, %.10lf, es: %.10lf\n", num1, num2, num3, num4, num5, promedio);
}

void positivonegativo () {
    double num1;
    printf("ingresa un numero: ");
    scanf("%lf", &num1);
    if (num1 < 0){
        printf("el numero es negativo \n");
    }
    else if (num1 > 0){
        printf("el numero es positivo \n");
    }
    else {
        printf("el numero es 0 \n");
    }
}

void potencia() {
    double base, exponente, resultado;
    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);
    resultado = pow(base, exponente);
    printf("%.4lf ^ %.4lf = %.10lf\n", base, exponente, resultado);
}

int main() {
    // para ejecutar cualquier ejercicio borrar comentario '//'
    // ejemplo();
    // pileibniz();
    // sumadouble();
    // promedio();
    // positivonegativo();
    /*
    para ejecutar potencia
    ejecutar desde una nueva terminal los siguientes 3 comandos
    cd /workspaces/C-Ejercicios/Estructuras/double
    gcc Ejercicios.c -o Ejercicios -lm
    ./Ejercicios
    */ 
    // potencia();
    return 0;
}
