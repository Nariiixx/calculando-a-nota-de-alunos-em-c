#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_ALUNO 3

typedef struct
{
    char nome[50];
    int matricula;
    float nota1, nota2, nota3, media;
} aluno;

int main()
{
    aluno alunos[MAX_ALUNO];
    int i = 0;
    for (i = 0; i < MAX_ALUNO; i++)
    {
        printf("digite o nome do aluno %d:\n", i + 1);
        scanf("%s", alunos[i].nome);
    }
    for (i = 0; i < MAX_ALUNO; i++)
    {
        printf("digite a matricula do aluno: %d\n", i + 1);
        scanf("%d", &alunos[i].matricula);
    }
    for (i = 0; i < MAX_ALUNO; i++)
    {
        printf("digite a primeira nota do aluno:%d\n", i + 1);
        scanf("%f", &alunos[i].nota1);
    }
    for (i = 0; i < MAX_ALUNO; i++)
    {
        printf("digite a segunda nota do aluno:%d\n", i + 1);
        scanf("%f", &alunos[i].nota2);
    }
    for (i = 0; i < MAX_ALUNO; i++)
    {
        printf("digite a terceira nota do aluno:%d\n", i + 1);
        scanf("%f", &alunos[i].nota3);
    }
    for (i = 0; i < MAX_ALUNO; i++)
    {
        printf("\naluno %d\n", i + 1);
        printf("nome: %s\n", alunos[i].nome);
        printf("matricula: %d\n", alunos[i].matricula);
        printf("nota 1: %2.2f\n", alunos[i].nota1);
        printf("nota 2: %2.2f\n", alunos[i].nota2);
        printf("nota 3: %2.2f\n", alunos[i].nota3);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        printf("a media das notas e: %2.2f\n", alunos[i].media);
    }
    return 0;
}
