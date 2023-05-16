#include<stdio.h>

struct Aluno{
    char Nome[20];
    char Telefone[20];
    char cpf[11];
    double TodoDinheiroDisponivel;
    int idade;
};

struct Professor{
    char Nome[20];
    char Telefone[20];
    char cpf[11];
    double TodoDinheiroDisponivelpMim;
};

int main(){
    struct Aluno aluno1;
    struct Professor professor1;

    int i;
    struct Aluno listaAlunosVetor[4];
    struct Aluno listaAlunosMatriz[2][2];
    
    

    printf("Digite o nome do aluno: ");
    scanf("%s", &aluno1.Nome);

    printf("Digite o cpf: ");
    fgets(aluno1.cpf, 11, stdin);

    printf("Digite o telefone:");
    gets(aluno1.Telefone);

    printf("Digite o valor disponível: ");
    scanf("%f", &aluno1.TodoDinheiroDisponivel);


    for (i = 0; i < 50; i++){


    }
    

    
}