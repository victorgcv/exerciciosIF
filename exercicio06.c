#include <stdio.h>
#include <locale.h>
/*
    Exercício 6
Desenvolver um algoritmo para ler o número de uma sala de aula, sua capacidade e o total
de alunos matriculados na mesma e 
imprimir uma linha mostrando o número da sala,
sua capacidade, o número de cadeiras ocupadas e sua disponibilidade
indicando se a sala está lotada ou não.
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int roomnumber, capacity, totalstudents;
    int asslivres, assocupados;
    char lotada[20];
    
    printf("Digite o número da sala de aula: ");
    scanf("%d", &roomnumber);
    
    printf("Digite a capacidade da sala de aula; ");
    scanf("%d", &capacity); 
    
    printf("Digite o total de estudantes: ");
    scanf("%d", &totalstudents);
    
     if (totalstudents >= capacity) {
        assocupados = capacity;
        asslivres = 0;
        sprintf(lotada, "LOTADA");
    } else {
        assocupados = totalstudents;
        asslivres = capacity - totalstudents;
        sprintf(lotada, "NÃO LOTADA");
    }
    
    printf("A sala nº %d tem capacidade para %d alunos. Atualmente está com %d assentos ocupados e %d disponíveis. Situação: %s.\n",
           roomnumber, capacity, assocupados, asslivres, lotada);
    
    return 0;
}
