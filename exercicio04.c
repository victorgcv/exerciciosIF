#include <stdio.h>
#include <locale.h>

/*  Exercício 4
Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de “y” de acordo com as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    //y = x , se x < 1;
    //y = 0 , se x = 1;
    //y = x² , se x > 1;

    int x, y;

    printf("Digite um número: ");
    scanf("%d", &x);

    if (x < 1) {
        y = x;
    }
    else if (x == 1) {
        y = 0;
    }
    else {
        y = x * x;
    }

    printf("O valor de y é: %d\n", y);
    
}
