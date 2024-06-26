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
char NomedaDisciplina[20], curso[20], CodigoDisciplina[20];

// curso
char CodigoCurso[20]; // a variavel curso � utilizada aqui tbm

// boletim
char CodigoBoletim[20], DataBoletim[20], materiaprof[20];

// calculo das notas
float nota1, nota2, nota3, nota4, MediadasNotas;

// opera��es dos menus
int OpMenuPincipal, OpSubMenuCad, OpSubMenuImpressao, operacao;

// caso necessario acrescentar novas variaveis
int opcao;

void menuprincipal();
void submenucad();
void submenuconteudo();
void submenunotas();
void submenuimpressao();

void menuprincipal()
{
    printf("|==========================================================================|\n");
    printf("|                               Menu principal                             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Cadastro                 |         2-Impress�o                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Conte�dos                |         4-Notas                     |\n");
    printf("===========================================================================+\n");
    printf("Informe a opera��o ou 5 para sair.\n");
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
    case 5:
        exit(0);
    default:
        printf("Op��o inv�lida!\n");
        menuprincipal();
    }
}

void submenucad()
{
    printf("|==========================================================================|\n");
    printf("|                              Cadastro geral                              |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Aluno                    |            2-Professor              |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Disciplina               |            4-Cursos                 |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|                      5-Voltar para o menu principal                      |\n");
    printf("===========================================================================+\n");
    printf("Informe a opera��o.\n");
    scanf("%d", &OpSubMenuCad);

    switch (OpSubMenuCad)
    {
    case 1:
        arquivo = fopen("C:\\temp\\alunos_e_curso.txt", "a+");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }

        printf("CPF, data de nascimento e matr�cula digite apenas os n�meros.\n");
        printf("Informe o nome completo do aluno: EX:\"Pedro\"\n");
        scanf("%s", NomeCompletoAluno);
        printf("Informe o CPF do aluno: EX:000.000.000-00\n");
        scanf("%s", CPFaluno);
        printf("Informe a matr�cula do aluno: EX:000.000\n");
        scanf("%s", MatriculaAluno);
        printf("Informe a data de nascimento do aluno: EX:00/00/0000\n");
        scanf("%s", DataNascimentoAluno);
        printf("Informe o curso do aluno:\n");
        scanf("%s", curso);

        fprintf(arquivo, "+---------Cadastro-Aluno----------+\n");
        fprintf(arquivo, "ALUNO: %s\n", NomeCompletoAluno);
        fprintf(arquivo, "CPF: %s\n", CPFaluno);
        fprintf(arquivo, "MATR�CULA: %s\n", MatriculaAluno);
        fprintf(arquivo, "DATA DE NASCIMENTO: %s\n", DataNascimentoAluno);
        fprintf(arquivo, "CURSO: %s\n", curso);

        fclose(arquivo);
        break;

    case 2:
        arquivo = fopen("C:\\temp\\professores.txt", "a+");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }

        printf("CPF, data de nascimento e matr�cula digite apenas os n�meros.\n");
        printf("Informe o nome completo do professor: EX:\"Pedro\"\n");
        scanf("%s", NomeCompletoProf);
        printf("Informe o CPF do professor: EX:000.000.000-00\n");
        scanf("%s", CPFprof);
        printf("Informe a matr�cula do professor: EX:000.000\n");
        scanf("%s", MatriculaProf);
        printf("Informe a data de nascimento do professor: EX:00/00/0000\n");
        scanf("%s", DataNascimentoProf);

        fprintf(arquivo, "+----------Cadastro-Professor--------+\n");
        fprintf(arquivo, "NOME: %s\n", NomeCompletoProf);
        fprintf(arquivo, "CPF: %s\n", CPFprof);
        fprintf(arquivo, "MATR�CULA: %s\n", MatriculaProf);
        fprintf(arquivo, "DATA NASCIMENTO: %s\n", DataNascimentoProf);

        fclose(arquivo);
        break;

    case 3:
        arquivo = fopen("C:\\temp\\disciplinas.txt", "a+");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }

        printf("Informe a disciplina:\n");
        scanf("%s", NomedaDisciplina);
        printf("Informe o c�digo da disciplina:\n");
        scanf("%s", CodigoDisciplina);

        fprintf(arquivo, "+--------Cadastro-Disciplina--------+\n");
        fprintf(arquivo, "DISCIPLINA: %s\n", NomedaDisciplina);
        fprintf(arquivo, "CODIGO: %s\n", CodigoDisciplina);

        fclose(arquivo);
        break;

    case 4:
        arquivo = fopen("C:\\temp\\cursos.txt", "a+");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }

        printf("Informe o curso:\n");
        scanf("%s", curso);

        fprintf(arquivo, "+--------Cadastro-Curso---------+\n");
        fprintf(arquivo, "CURSO: %s\n", curso);

        fclose(arquivo);
        break;

    case 5:
        system("cls");
        menuprincipal();
        return;

    default:
        printf("Op��o inv�lida!\n");
        submenucad();
    }

    printf("Deseja voltar ao menu principal? \n 1-Sim 2-N�o:\n");
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

void submenuconteudo()
{
    arquivo = fopen("C:\\temp\\conteudos.txt", "a+");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("|==========================================================================|\n");
    printf("|                                  Conte�dos                               |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("Digite a mat�ria que deseja contabilizar as notas:\n");
    scanf("%s", materiaprof);

    fprintf(arquivo, "+--------Conte�do---------+\n");
    fprintf(arquivo, "Mat�ria: %s\n", materiaprof);

    fclose(arquivo);

    printf("Deseja voltar ao menu principal? \n 1-Sim 2-N�o:\n");
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

void submenunotas()
{
    arquivo = fopen("C:\\temp\\notas.txt", "a+");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
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
    printf("A sua m�dia �: %.2f\n", MediadasNotas);

    fprintf(arquivo, "+-----------Valor-das-Notas---------+\n");
    fprintf(arquivo, "Nome do aluno: %s\n", NomeCompletoAluno);
    fprintf(arquivo, "Nota 1: %.2f\n", nota1);
    fprintf(arquivo, "Nota 2: %.2f\n", nota2);
    fprintf(arquivo, "Nota 3: %.2f\n", nota3);
    fprintf(arquivo, "Nota 4: %.2f\n", nota4);
    fprintf(arquivo, "M�dia: %.2f\n", MediadasNotas);

    fclose(arquivo);

    printf("Deseja voltar ao menu principal? \n 1-Sim 2-N�o:\n");
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

void submenuimpressao()
{
    printf("|==========================================================================|\n");
    printf("|                                 Impress�o                                |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         1-Imprimir Aluno           |        2-Imprimir Professor         |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         3-Imprimir Disciplina      |        4-Imprimir Curso             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|         5-Imprimir Conte�dos       |        6-Imprimir Notas             |\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("|                      7-Voltar para o menu principal                      |\n");
    printf("===========================================================================+\n");
    printf("Informe a opera��o.\n");
    scanf("%d", &OpSubMenuImpressao);

    switch (OpSubMenuImpressao)
    {
    case 1:
        arquivo = fopen("C:\\temp\\alunos_e_curso.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        char ch;
        while ((ch = fgetc(arquivo)) != EOF)
        {
            putchar(ch);
        }
        fclose(arquivo);
        break;

    case 2:
        arquivo = fopen("C:\\temp\\professores.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        while ((ch = fgetc(arquivo)) != EOF)
        {
            putchar(ch);
        }
        fclose(arquivo);
        break;

    case 3:
        arquivo = fopen("C:\\temp\\disciplinas.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        while ((ch = fgetc(arquivo)) != EOF)
        {
            putchar(ch);
        }
        fclose(arquivo);
        break;

    case 4:
        arquivo = fopen("C:\\temp\\cursos.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        while ((ch = fgetc(arquivo)) != EOF)
        {
            putchar(ch);
        }
        fclose(arquivo);
        break;

    case 5:
        arquivo = fopen("C:\\temp\\conteudos.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        while ((ch = fgetc(arquivo)) != EOF)
        {
            putchar(ch);
        }
        fclose(arquivo);
        break;

    case 6:
        arquivo = fopen("C:\\temp\\notas.txt", "r");
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.\n");
            return;
        }
        while ((ch = fgetc(arquivo)) != EOF)
        {
            putchar(ch);
        }
        fclose(arquivo);
        break;

    case 7:
        system("cls");
        menuprincipal();
        return;

    default:
        printf("Op��o inv�lida!\n");
        submenuimpressao();
    }

    printf("Deseja voltar ao menu principal? \n 1-Sim 2-N�o:\n");
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
    setlocale(LC_ALL, "Portuguese");
    menuprincipal();
    return 0;
}
