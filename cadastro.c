#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// dados aluno
char NomeCompletoAluno[20];
int MatriculaAluno, CPFaluno, DataNascimentoAluno;
// dados professor
char NomeCompletoProf[20];
int MatriculaProf, CPFprof, DataNascimentoProf;
// disciplina
char NomedaDisciplina, curso[30];
int CodigoDisciplina;
// curso
int CodigoCurso;
char NomeCurso[10];
// boletim
int CodigoBoletim, DataBoletim, notas, MediadasNotas;
// operações dos menus
int OpMenuPincipal, OpSubMenuCad, OpSubMenuImpressao;
//  caso necessario acrescentar novas variaveis

void menuprincipal()
{
    printf("|==========================================================================|\n");
    printf("|                            cadastro de notas                             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-cadastro                 |         2-impressão                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-conteudos                |         4-notas                     |\n");
    printf("===========================================================================+\n");
    printf("Informe a operação ou 5 para sair\n");
    scanf("%d", &OpMenuPincipal);
    switch (OpMenuPincipal)
    {
    case 1:
        system("cls");
        submenucad();

        break;
    case 2:
        system("cls");
        submenuimpressao();

        break;
    }
}
void submenucad()
{

    printf("|==========================================================================|\n");
    printf("|                              cadastro geral                              |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Alunos                   |            2-Professores            |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Disciplina               |            4-Cursos                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|                    5- para voltar para o menu principal                  |\n");
    printf("===========================================================================+\n");
    printf("Informe a operação ou 5 para o menu principal\n");
    scanf("%d", &OpSubMenuCad);
    switch (OpSubMenuCad)
    {
    case 1:
        printf("informe os dados do aluno \n");

        break;
    case 2:
        printf("insira os dados do professor");

        break;
    case 3:
        printf("informe a disciplina\n");
        break;
    case 4:
        printf("informe o curso \n");
        break;
    case 5:
        system("cls");
        menuprincipal();
        break;
    }
}

void submenuimpressao()
{

    printf("|==========================================================================|\n");
    printf("|                              impressão de dados                          |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Alunos e Curso                 |          2-conteúdos          |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Disciplina e Professor         |          4-boletim            |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         5-menu principal                 |          6-cadastro geral     |\n");
    printf("===========================================================================+\n");
    printf("Informe a operação:\n");
    scanf("%d", &OpSubMenuImpressao);
    switch (OpSubMenuImpressao)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        system("cls");
        menuprincipal();
        break;
    case 6:
        system("cls");
        submenucad();
        break;
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    menuprincipal();
    system("pause");
}
