#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// dados aluno
char NomeCompletoAluno;
int MatriculaAluno , CPFaluno,DataNascimentoAluno;
//dados professor
char NomeCompletoProf;
int MatriculaProf, CPFprof, DataNascimentoProf;
//disciplina
char NomedaDisciplina, curso;
int CodigoDisciplina;
//curso
int CodigoCurso;
char NomeCurso;
//boletim
int CodigoBoletim, DataBoletim, notas, MediadasNotas;
//caso necessario acrescentar novas variaveis 
char
void menuprincipal()
{
    printf("|==========================================================================|\n");
    printf("|                            cadastro de notas                             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-cadastro                 |         2-impressão                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-conteudos                |         4-notas                     |\n");
    printf("===========================================================================+\n");
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
}

void submenuimpressao()
{

    printf("|==========================================================================|\n");
    printf("|                              impressão de dados                              |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Alunos e Curso                   |        2-conteúdos          |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Disciplina e Professor           |        4-boletim            |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|              5- aperte 5 para voltar para o menu principal               |\n");
    printf("===========================================================================+\n");
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
}
