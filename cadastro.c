#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// dados aluno
char NomeCompletoAluno;
int MatriculaAluno, CPFaluno, DataNascimentoAluno;
// dados professor
char NomeCompletoProf;
int MatriculaProf, CPFprof, DataNascimentoProf;
// disciplina
char NomedaDisciplina, curso;
int CodigoDisciplina;
// curso
int CodigoCurso;
char NomeCurso;
// boletim
int CodigoBoletim, DataBoletim, notas, MediadasNotas;
// opera��es dos menus
int OpMenuPincipal, OpSubMenuCad, OpSubMenuImpressao;
//  caso necessario acrescentar novas variaveis

void menuprincipal()
{
    printf("|==========================================================================|\n");
    printf("|                            cadastro de notas                             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-cadastro                 |         2-impress�o                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-conteudos                |         4-notas                     |\n");
    printf("===========================================================================+\n");
    printf("Informe a opera��o ou 5 para sair\n");
    scanf("%d", &OpMenuPincipal);
    switch (OpMenuPincipal)
    {
    case 1:
        submenucad();
        break;
    case 2:
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
    printf("|              5- Aperte 5 para voltar para o menu principal               |\n");
    printf("===========================================================================+\n");
    printf("Informe a opera��o ou 5 para o menu principal\n");
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



    
  
    }
}

void submenuimpressao()
{

    printf("|==========================================================================|\n");
    printf("|                              impress�o de dados                          |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Alunos e Curso                   |        2-conte�dos          |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Disciplina e Professor           |        4-boletim            |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|              5- aperte 5 para voltar para o menu principal               |\n");
    printf("===========================================================================+\n");
}
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    menuprincipal();
    system("pause");
}
