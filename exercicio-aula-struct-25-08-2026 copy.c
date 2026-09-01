```c
#include <stdio.h>

typedef struct funcionario {

    char nome[50];
    char salario[20];
    char identificador[20];
    char cargo[20];

} funcionario;


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

    recebe(&p);

    imprime(p);

    return 0;
}

