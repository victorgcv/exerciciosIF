#include <stdio.h>
#include <locale.h>

int main()
{
     setlocale( LC_ALL, "Portuguese") ;
     
     /*
        Exercício 1
Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
     */
     
    
     int numero;
     
 printf("Digite um número inteiro;");
 scanf("%d", &numero);
 
// se numero divido por 3 tem sobra igual a 0 e numero divido por 5 tem sobra igual 0, eles dividem por 3 e por 5.
 if ( numero % 3 == 0 && numero % 5 == 0)
    printf("\nO número %d é divisível por 5 e por 3.\n", numero);

 else 
    printf("O número %d não é divisível por 5 e por 3. \n", numero);
     
}
