#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <ctype.h>

void ascii() {
    char c;
    printf("ingrese un caracter: ");
    scanf(" %c", &c);
    printf("el caracter es %c y su codigo ascii es %d \n",c,c);
}

void verificacion (){
    char c;
    printf("ingrese una letra: ");
    scanf(" %c", &c);
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
       printf ("la letra '%c' es una vocal", c); 
    }
    else if (isalpha(c)){
        printf("la letra '%c' es una consonante",c);
    }
    else {
        printf("caracter no correspondiente\n");
    }
}

void MayMin(){
    char c;
    printf("ingrese una letra minuscula: ");
    scanf(" %c", &c);
    c = toupper(c);
    printf("%c\n",c);
}

void contarletra() {
    int contador = 0;
    char palabra[20], letra;
    printf("ingresa una palabra: ");
    scanf(" %s", &palabra);
    printf("ingresa la vocal a buscar en tu palabra: ");
    scanf(" %c", &letra);
    for (int i = 0; palabra[i] != '\0'; i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }
    printf("la letra '%c' aparece %d veces en la palabra '%s' \n",letra,contador,palabra);
}

void verificarnumero() {
    char c;
    printf("Ingrese un carácter: ");
    scanf("%c", &c);
    if (isdigit(c)) {
        printf("El carácter '%c' es un dígito numérico.\n", c);
    } else {
        printf("El carácter '%c' no es un dígito numérico.\n", c);
    }
}

int main() {
    // para ejecutar cualquier ejercicio borrar comentario '//'
    //ascii();
    //verificacion(); 
    //MayMin(); 
    //contarletra(); 
    //verificarnumero();
    return 0;
}
