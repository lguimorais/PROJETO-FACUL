#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// arquivos
FILE *arquivo;
// dados aluno
char MatriculaAluno, CPFaluno, DataNascimentoAluno, NomeCompletoAluno[50];
// dados professor
char NomeCompletoProf[50];
int MatriculaProf, CPFprof, DataNascimentoProf;
// disciplina
char NomedaDisciplina, curso[60];
int CodigoDisciplina;
// curso
int CodigoCurso;
char NomeCurso[20];
// boletim
int CodigoBoletim, DataBoletim, notas, MediadasNotas;
// operações dos menus
int OpMenuPincipal, OpSubMenuCad, OpSubMenuImpressao;
//  caso necessario acrescentar novas variaveis

void menuprincipal()
{

   
    printf("|==========================================================================|\n");
    printf("|                            Cadastro de notas                             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Cadastro                 |         2-Impressão                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Conteúdos                |         4-Notas                     |\n");
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
    printf("Informe a operação\n");
    scanf("%d", &OpSubMenuCad);
    switch (OpSubMenuCad)
    {
    case 1:
        arquivo = fopen("", "w+");
        if (arquivo == 0)
        {
            printf("falha ao visualizar o arquivo.\n");
        }
        else
        {
            printf("arquivo encontrado com sucesso\n");
            system("Pause");
            printf("nos dados:CPF,data de nascimento e matricula digite apenas os numeros.\n");
            printf("informe o nome do aluno:EX:\"pedro\" \n");
            scanf("%s", &NomeCompletoAluno);
            printf("informe o CPF  do aluno: EX:000.000.000-00\n");
            scanf("%s", &CPFaluno);
            printf("informe a matricula do aluno:EX:000.000\n");
            scanf("%s", &MatriculaAluno);
            printf("informe a data de nascimento do aluno:EX:00/00/0000\n");
            scanf("%s", &DataNascimentoAluno);
            fclose(arquivo);
        }
        break;
    case 2:
        printf("nos dados:CPF,data de nascimento e matricula digite apenas os numeros.\n");
        printf("insira os dados do professor: EX:\"pedro\"");
        scanf("%s", &NomeCompletoProf);
        printf("informe o CPF  do professor: EX:000.000.000-00\n");
        scanf("%s", &CPFprof);
        printf("informe a matricula do professor: EX:000.000\n");
        scanf("%s", &MatriculaProf);
        printf("informe a data de nascimento do professor: EX:00/00/0000\n");
        scanf("%s", &DataNascimentoProf);
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
