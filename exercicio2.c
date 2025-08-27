#include <stdio.h>
#include <locale.h>

int main()
{
     setlocale( LC_ALL, "Portuguese") ;
     
     /*
        Exercício 2
Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.     */
     
    //descobre o numero maior
    // soma os tres menores
    //printa a soma dos 3 menores
    
     int n1, n2, n3, n4;
     int somados3;
     
     printf("Digite quatro números distintos: ");
     scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
     
    if (n1 > n2 && n1 > n3 && n1 > n4)
        {somados3 = n2 + n3 + n4;}
        
        
    else if (n2 > n1 && n2 > 3 && n2 > n4)
       { somados3 = n1 + n3 + n4;}
        
        
    else if (n3 > n1 && n3 > n2 && n3 > n4)
        {somados3 = n1 + n2 + n4;}
        
        
    else
       { somados3 = n1 + n2 + n3;}
        printf("A soma dos três menores é: %d.", somados3);    
        
}
