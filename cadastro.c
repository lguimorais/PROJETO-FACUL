#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// arquivos
FILE *arquivo;
// dados aluno
char MatriculaAluno[20], CPFaluno[20], DataNascimentoAluno[20], NomeCompletoAluno[20];
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

    printf("|==========================================================================|\n");
    printf("|                               Menu principal                             |\n");
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
    arquivo = fopen("C://temp//notas.txt", "w+");
    if (arquivo == 0)
    {
        printf("Falha ao visualizar o arquivo.\n");
    }

    printf("|==========================================================================|\n");
    printf("|                              Cadastro geral                              |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Aluno                    |            2-Professor              |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Disciplina               |            4-Cursos                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|                      5-Voltar para o menu principal                      |\n");
    printf("===========================================================================+\n");
    printf("Informe a operação.\n");
    scanf("%d", &OpSubMenuCad);
    switch (OpSubMenuCad)
    {
    case 1:

        printf("Arquivo encontrado com sucesso!\n");
        system("Pause");
        printf("CPF, data de nascimento e matrícula digite apenas os números.\n");
        printf("Informe o nome completo do aluno: EX:\"Pedro\" \n");
        scanf("%s", &NomeCompletoAluno);
        printf("Informe o CPF do aluno: EX:000.000.000-00\n");
        scanf("%s", &CPFaluno);
        printf("Informe a matrÍcula do aluno: EX:000.000\n");
        scanf("%s", &MatriculaAluno);
        printf("Informe a data de nascimento do aluno: EX:00/00/0000\n");
        scanf("%s", &DataNascimentoAluno);
        printf("Informe o curso do aluno:\n");
        scanf("%s", &curso);
        fprintf(arquivo, "+---------Cadastro-Aluno----------+\n");
        fprintf(arquivo, "ALUNO: %s\n", NomeCompletoAluno);
        fprintf(arquivo, "CPF: %s\n", CPFaluno);
        fprintf(arquivo, "MATRÍCULA: %s\n", MatriculaAluno);
        fprintf(arquivo, "DATA DE NASCIMENTO: %s\n", DataNascimentoAluno);
        fprintf(arquivo, "CURSO: %s\n", curso);
        submenucad();
        break;
    case 2:

        printf("CPF, data de nascimento e matrícula digite apenas os números.\n");
        printf("Informe o nome completo do professor: EX:\"Pedro\"\n");
        scanf("%s", &NomeCompletoProf);
        printf("Informe o CPF do professor: EX:000.000.000-00\n");
        scanf("%s", &CPFprof);
        printf("Informe a matrÍcula do professor: EX:000.000\n");
        scanf("%s", &MatriculaProf);
        printf("Informe a data de nascimento do professor: EX:00/00/0000\n");
        scanf("%s", &DataNascimentoProf);
        fprintf(arquivo, "+----------Cadastro-Professor--------+\n");
        fprintf(arquivo, "NOME:%s\n", NomeCompletoProf);
        fprintf(arquivo, "CPF:%s\n", CPFprof);
        fprintf(arquivo, "MATRÍCULA:%s\n", MatriculaProf);
        fprintf(arquivo, "DATA NASCIMENTO:%s\n", DataNascimentoProf);
        submenucad();

        break;
    case 3:
        printf("Informe a disciplina:\n");
        scanf("%s", &NomedaDisciplina);
        printf("Informe o código da disciplina:\n");
        scanf("%s", &CodigoDisciplina);
        fprintf(arquivo, "+--------Cadastro-Disciplina--------+\n");
        fprintf(arquivo, "DISCIPLINA:%s\n", NomedaDisciplina);
        fprintf(arquivo, "CODIGO:%s\n", CodigoDisciplina);

        submenucad();
        break;
    case 4:
        printf("Informe o curso: \n");
        scanf("%s", &curso);
        fprintf(arquivo, "+--------Cadastro-Curso---------+\n");
        fprintf(arquivo, "CURSO:%s\n", curso);
        printf("Deseja voltar ao menu principal? \n 1-Sim 2-Não:\n");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            menuprincipal();
        }
        else
        {
            printf("App encerrado.\n");
        }
        break;
    case 5:
        system("cls");
        menuprincipal();
        break;
    }
    fclose(arquivo);
}
void submenuconteudo()
{
    arquivo = fopen("C://temp//notas.txt", "a+");
    if (arquivo == 0)
    {
        printf("Falha ao visualizar o arquivo.\n");
    }
    printf("|==========================================================================|\n");
    printf("|                                  Conteúdos                               |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("Digite a matéria que deseja contabilizar as notas:\n");
    scanf("%s", &materiaprof);
    fprintf(arquivo, "+--------Conteúdo---------+\n");
    fprintf(arquivo, "Matéria:%s\n", materiaprof);

    printf("Deseja voltar ao menu principal? \n 1-Sim 2-Não:\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        fclose(arquivo);
        menuprincipal();
    }
    else
    {
        printf("App encerrado.\n");
    }fclose(arquivo);
}

void submenunotas()
{
    arquivo = fopen("C://temp//notas.txt", "a+");
    if (arquivo == 0)
    {
        printf("Falha ao visualizar o arquivo.\n");
    }
    printf("|==========================================================================|\n");
    printf("|                                    Notas                                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:");
    scanf("%f", &nota3);
    printf("Digite a quarta nota:");
    scanf("%f", &nota4);
    MediadasNotas = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("a sua media é:%.2f\n", MediadasNotas);
    fprintf(arquivo, "+-----------Valor-das-Notas---------+\n");
    fprintf(arquivo, "Nome do aluno:%s\n", NomeCompletoAluno);
    fprintf(arquivo, "Nota 1:%.2f\n", nota1);
    fprintf(arquivo, "Nota 2:%.2f\n", nota2);
    fprintf(arquivo, "Nota 3:%.2f\n", nota3);
    fprintf(arquivo, "Nota 4:%.2f\n", nota4);
    fprintf(arquivo, "A media das notas é:%.2f\n", MediadasNotas);

    printf("Deseja voltar ao menu principal? \n 1-Sim 2-Não:\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        menuprincipal();
    }
    else
    {
        printf("App encerrado.\n");
    }
    fclose(arquivo);
}

void submenuimpressao()
{
    FILE *arquivo;

    printf("|==========================================================================|\n");
    printf("|                              Impressão de dados                          |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Alunos e Curso                 |          2-Conteúdos          |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Disciplina e Professor         |          4-Boletim            |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         5-Menu principal                 |          6-Cadastro geral     |\n");
    printf("===========================================================================+\n");
    printf("Informe a operação:\n");
    scanf("%d", &OpSubMenuImpressao);
    getchar(); // Para consumir a nova linha deixada por scanf

    switch (OpSubMenuImpressao)
    {
    case 1:
        arquivo = fopen("alunos_e_curso.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        fgets(NomeCompletoAluno, sizeof(NomeCompletoAluno), arquivo);
        fgets(CPFaluno, sizeof(CPFaluno), arquivo);
        fgets(MatriculaAluno, sizeof(MatriculaAluno), arquivo);
        fgets(DataNascimentoAluno, sizeof(DataNascimentoAluno), arquivo);
        fgets(curso, sizeof(curso), arquivo);
        fclose(arquivo);

        printf("Nome: %s", NomeCompletoAluno);
        printf("CPF: %s", CPFaluno);
        printf("Matrícula: %s", MatriculaAluno);
        printf("Data de Nascimento: %s", DataNascimentoAluno);
        printf("Curso: %s", curso);
        system("pause");
        system("cls");
        break;
    case 2:
        arquivo = fopen("conteudos.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        fgets(materiaprof, sizeof(materiaprof), arquivo);
        fclose(arquivo);

        printf("Matéria: %s", materiaprof);
        system("pause");
        system("cls");
        break;
    case 3:
        arquivo = fopen("disciplina_e_professor.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        fgets(NomedaDisciplina, sizeof(NomedaDisciplina), arquivo);
        fgets(CodigoDisciplina, sizeof(CodigoDisciplina), arquivo);
        fgets(NomeCompletoProf, sizeof(NomeCompletoProf), arquivo);
        fgets(CPFprof, sizeof(CPFprof), arquivo);
        fgets(DataNascimentoProf, sizeof(DataNascimentoProf), arquivo);
        fgets(MatriculaProf, sizeof(MatriculaProf), arquivo);
        fclose(arquivo);

        printf("Disciplina: %s", NomedaDisciplina);
        printf("Código da disciplina: %s", CodigoDisciplina);
        printf("Professor: %s", NomeCompletoProf);
        printf("CPF: %s", CPFprof);
        printf("Data de Nascimento: %s", DataNascimentoProf);
        printf("Matrícula: %s", MatriculaProf);
        system("pause");
        system("cls");
        break;
    case 4:
        arquivo = fopen("boletim.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        fgets(NomeCompletoAluno, sizeof(NomeCompletoAluno), arquivo);
        fscanf(arquivo, "%f", &nota1);
        fscanf(arquivo, "%f", &nota2);
        fscanf(arquivo, "%f", &nota3);
        fscanf(arquivo, "%f", &nota4);
        fscanf(arquivo, "%f", &MediadasNotas);
        fclose(arquivo);

        printf("Boletim:\n");
        printf("Nome do aluno: %s", NomeCompletoAluno);
        printf("Nota 1: %.2f\n", nota1);
        printf("Nota 2: %.2f\n", nota2);
        printf("Nota 3: %.2f\n", nota3);
        printf("Nota 4: %.2f\n", nota4);
        printf("Média: %.2f\n", MediadasNotas);
        system("pause");
        system("cls");
        break;
    case 5:
        system("cls");
        menuprincipal();
        break;
    case 6:
        system("cls");
        submenucad();
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    printf("Deseja voltar ao menu principal? \n 1-Sim 2-Não:\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        menuprincipal();
    }
    else
    {
        printf("App encerrado.\n");
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    menuprincipal();
    system("pause");
}