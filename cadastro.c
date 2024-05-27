#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// arquivos
FILE *arquivo;
// dados aluno
char MatriculaAluno[10], CPFaluno[10], DataNascimentoAluno[10], NomeCompletoAluno[10], cursoaluno[10];
// dados professor
char NomeCompletoProf[10], MatriculaProf[10], CPFprof[10], DataNascimentoProf[10];
// disciplina
char NomedaDisciplina[10], curso[10], CodigoDisciplina[10];
// curso
char CodigoCurso[10] /*a variavel curso é utilizada aqui tbm*/;
// boletim
char CodigoBoletim[10], DataBoletim[10], materiaprof[10];
// calculo das notas
float nota1, nota2, nota3, nota4, MediadasNotas;
// operações dos menus
int OpMenuPincipal,
    OpSubMenuCad, OpSubMenuImpressao, operacao;
//  caso necessario acrescentar novas variaveis

void menuprincipal()
{
    arquivo = fopen("C://temp//notas.txt", "w+");
    if (arquivo == 0)
    {
        printf("falha ao visualizar o arquivo.\n");
    }

    printf("|==========================================================================|\n");
    printf("|                            Cadastro de notas                             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Cadastro                 |         2-Impressão                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Conteúdos                |         4-Notas                     |\n");
    printf("===========================================================================+\n");
    printf("Informe a operação ou 5 para sair.\n");
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
    case 3:
        submenuconteudo();
        break;
    case 4:
        submenunotas();
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
    printf("Informe a operação.\n");
    scanf("%d", &OpSubMenuCad);
    switch (OpSubMenuCad)
    {
    case 1:

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
        printf("informe o curso do aluno:\n");
        scanf("%s", curso);
        fprintf(arquivo, "+------------------Cad.aluno----------------+\n");
        fprintf(arquivo, "o nome do aluno é:%s\n", NomeCompletoAluno);
        fprintf(arquivo, "o CPF é:%s\n", CPFaluno);
        fprintf(arquivo, "a matricula do aluno é:%s\n", MatriculaAluno);
        fprintf(arquivo, "a data de nascimento do aluno é:%s\n", DataNascimentoAluno);
        fprintf(arquivo, "o curso do aluno é:%s\n", cursoaluno);
        submenucad();

        break;
    case 2:

        printf("nos dados:CPF,data de nascimento e matricula digite apenas os numeros.\n");
        printf("insira os dados do professor: EX:\"pedro\"\n");
        scanf("%s", &NomeCompletoProf);
        printf("informe o CPF  do professor: EX:000.000.000-00\n");
        scanf("%s", &CPFprof);
        printf("informe a matricula do professor: EX:000.000\n");
        scanf("%s", &MatriculaProf);
        printf("informe a data de nascimento do professor: EX:00/00/0000\n");
        scanf("%s", &DataNascimentoProf);
        printf("informe a materia:\n");
        scanf("%s", &materiaprof);
        fprintf(arquivo, "+------------------Cad.Prof-----------------+\n");
        fprintf(arquivo, "o nome do professor é:%s\n", NomeCompletoProf);
        fprintf(arquivo, "o CPF é:%s\n", CPFprof);
        fprintf(arquivo, "a matricula do professor é:%s\n", MatriculaProf);
        fprintf(arquivo, "a data de nascimento do professor é:%s\n", DataNascimentoProf);
        fprintf(arquivo, "o nome da materia:%s\n", materiaprof);
        submenucad();

        break;
    case 3:
        printf("informe a disciplina:\n");
        scanf("%s", &NomedaDisciplina);
        printf("informe o codigo da disciplina:\n");
        scanf("%s", &CodigoDisciplina);
        fprintf(arquivo, "+------------------Cad.discip--------------+\n");
        fprintf(arquivo, "O nome da disciplina é:%s\n", NomedaDisciplina);
        fprintf(arquivo, "O código da disciplina é:%s\n", CodigoDisciplina);

        submenucad();
        break;
    case 4:
        printf("informe o curso: \n");
        scanf("%s", &curso);
        fprintf(arquivo, "+------------------Cad.Curso--------------+\n");
        fprintf(arquivo, "o curso é:%s\n", curso);
        fclose(arquivo);
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
void submenuconteudo()
{
    printf("|==========================================================================|\n");
    printf("|                                  conteudos                               |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("Digite a materia que deseja contabilizar as notas:\n");
}
void submenunotas()
{
    printf("|==========================================================================|\n");
    printf("|                                    notas                                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("digite a priemira nota:");
    scanf("%f", &nota1);
    printf("digite a priemira nota:");
    scanf("%f", &nota2);
    printf("digite a priemira nota:");
    scanf("%f", &nota3);
    printf("digite a priemira nota:");
    scanf("%f", &nota4);
    MediadasNotas = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("a sua media é:%.2f\n", MediadasNotas);
}
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    menuprincipal();
    system("pause");
}