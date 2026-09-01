#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Necessário para usar a função strcpy que serve para copiar um valor de uma variável para outra de forma temporária.
typedef struct funcionario {

    char nome[50];
    char salario[20];
    char identificador[20];
    char cargo[20];
} funcionario;



void altera_salario(funcionario *a) {

    printf("\nDigite o novo salario: ");
    scanf("%19s", a->salario);
    
}
void recebe(funcionario *a) {


    printf("Digite seu nome: ");
    scanf(" %49[^\n]", a->nome);


    printf("Salario: ");
    scanf("%19s", a->salario);


    printf("Identificador: ");
    scanf("%19s", a->identificador);


    printf("Cargo: ");
    scanf("%19s", a->cargo); 
}


void imprime(funcionario a) {

    printf("Nome: %s\n", a.nome);
    printf("Salario: %s\n", a.salario);
    printf("Identificador: %s\n", a.identificador);
    printf("Cargo: %s\n", a.cargo);
}


int main(void) {

    funcionario p;
    char salario_antigo[20];

    recebe(&p);

    strcpy(salario_antigo, p.salario);

    altera_salario(&p);

    printf("\n--- Resumo da Alteracao ---\n");
    printf("Funcionario: %s\n", p.nome);
    printf("Salario antigo: %s\n", salario_antigo);
    printf("Salario novo: %s\n", p.salario);

    return 0;
}
