#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// arquivos
FILE *arquivo;
// dados aluno
char MatriculaAluno[20], CPFaluno[20], DataNascimentoAluno[20], NomeCompletoAluno[20], cursoaluno[20];
// dados professor
char NomeCompletoProf[20], MatriculaProf[20], CPFprof[20], DataNascimentoProf[20];
// disciplina
char NomedaDisciplina[10], curso[20], CodigoDisciplina[20];
// curso
char CodigoCurso[20] /*a variavel curso é utilizada aqui tbm*/;
// boletim
char CodigoBoletim[20], DataBoletim[20], materiaprof[20];
// calculo das notas
float nota1, nota2, nota3, nota4, MediadasNotas;
// operações dos menus
int OpMenuPincipal, OpSubMenuCad, OpSubMenuImpressao, operacao;
//  caso necessario acrescentar novas variaveis
int opcao;

void menuprincipal()
{
    arquivo = fopen("C://temp//notas.txt", "w+");
    if (arquivo == 0)
    {
        printf("falha ao visualizar o arquivo.\n");
    }

    printf("|==========================================================================|\n");
    printf("|                               menu principal                             |\n");
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
    printf("|         1-Aluno                    |            2-Professor              |\n");
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
        scanf("%s", &curso);
        fprintf(arquivo, "+------------------Cad.aluno----------------+\n");
        fprintf(arquivo, "ALUNO: %s\n", NomeCompletoAluno);
        fprintf(arquivo, "CPF: %s\n", CPFaluno);
        fprintf(arquivo, "NUMERO DA MATRICULA: %s\n", MatriculaAluno);
        fprintf(arquivo, "DATA DE NASCIMENTO: %s\n", DataNascimentoAluno);
        fprintf(arquivo, "CURSO: %s\n", cursoaluno);
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
        fprintf(arquivo, "+------------------Cad.Prof-----------------+\n");
        fprintf(arquivo, "NOME:%s\n", NomeCompletoProf);
        fprintf(arquivo, "CPF:%s\n", CPFprof);
        fprintf(arquivo, "MATRICULA:%s\n", MatriculaProf);
        fprintf(arquivo, "DATA NASCIMENTO:%s\n", DataNascimentoProf);
        submenucad();

        break;
    case 3:
        printf("informe a disciplina:\n");
        scanf("%s", &NomedaDisciplina);
        printf("informe o codigo da disciplina:\n");
        scanf("%s", &CodigoDisciplina);
        fprintf(arquivo, "+------------------Cad.discip--------------+\n");
        fprintf(arquivo, "DISCIPLINA:%s\n", NomedaDisciplina);
        fprintf(arquivo, "CODIGO:%s\n", CodigoDisciplina);

        submenucad();
        break;
    case 4:
        printf("informe o curso: \n");
        scanf("%s", &curso);
        fprintf(arquivo, "+------------------Cad.Curso--------------+\n");
        fprintf(arquivo, "CURSO:%s\n", curso);
        break;
    case 5:
        system("cls");
        menuprincipal();
        break;
    }
}
void submenuconteudo()
{
    printf("|==========================================================================|\n");
    printf("|                                  conteudos                               |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("Digite a materia que deseja contabilizar as notas:\n");
    scanf("%s", &materiaprof);

    int opcao;

    printf("Deseja voltar ao menu principal? \n 1-sim 2-nao:\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        fclose(arquivo);
        menuprincipal();
    }
    else
    {
        exit(0);
    }
}
void submenunotas()
{
    printf("|==========================================================================|\n");
    printf("|                                    notas                                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("digite a primeira nota:");
    scanf("%f", &nota1);
    printf("digite a segunda nota:");
    scanf("%f", &nota2);
    printf("digite a terceira nota:");
    scanf("%f", &nota3);
    printf("digite a quarta nota:");
    scanf("%f", &nota4);
    MediadasNotas = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("a sua media é:%.2f\n", MediadasNotas);
    fprintf(arquivo, "+-----------------Valor das Notas-------------+\n");
    fprintf(arquivo, "a media das notas é:%.2f\n", MediadasNotas);


    printf("Deseja voltar ao menu principal? \n 1-sim 2-nao:\n");
    scanf("%d", &opcao);
    if (opcao == 1) {
        fclose(arquivo);
        menuprincipal();
    }
    else {
        printf("app encerrado\n");
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
        system("cls");
        submenunotas();
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