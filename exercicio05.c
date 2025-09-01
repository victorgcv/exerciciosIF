#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int mes, ano, dias;
    
    printf("Digite o mês (1 a 12):");
    scanf("%d", &mes);
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    //verifica a quantidade de dias do mês;
    
    if (mes ==1 ){
        dias = 31;
    } else if (mes == 2) {
        //calcula ano bissexto;
            if ((ano % 400 == 0 ) || ( ano % 4 == 0 && ano != 0)) {
                dias = 29;
            }
            else (dias = 28); {
    } }
    
    else if (mes == 3) {
        (dias = 31);
    }
    
    else if (mes == 4){
        (dias = 30);
    }
    
    else if (mes == 5){
        (dias = 31);
    }
    
    else if (mes == 6){
        (dias = 30);
    }
    
    else if (mes == 7){
        (dias = 31);
    }
    
    else if (mes == 8){
        (dias = 31);
    }
    
    else if (mes == 9){
        (dias = 30);
    }
    
    else if (mes == 10){
        (dias = 31);
    }
    
    else if (mes == 11){
        (dias = 30);
    }
    
    else if (mes == 12){
        (dias = 31);
    }
   
   else {
       printf("Insira o número de um mês válido. (Ex: 01, 02, 03, ...)\n");
       return 1;
   }
   
   printf("O %d mês do ano %d têm %d dias.", mes, ano, dias);

    return 0;
}
