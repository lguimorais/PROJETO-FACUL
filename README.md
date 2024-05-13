
# Algoritmo de Gestão Acadêmica em C

Este projeto consiste em um algoritmo desenvolvido em linguagem C para simular o processo de gestão acadêmica, oferecendo funcionalidades essenciais para controle acadêmico.

## Funcionalidades Principais

### Menu Principal

O menu principal do aplicativo oferece as seguintes opções:

1. **CADASTROS**
   - Alunos
   - Professores
   - Disciplinas
   - Cursos
   - Voltar ao Menu Principal

2. **IMPRESSÃO**
   - Alunos e Curso
   - Conteúdos
   - Disciplinas e Professores
   - Boletim
   - Voltar ao Menu Principal

3. **CONTEÚDOS**

4. **NOTAS**

5. **SAIR**

## Detalhes dos Sub-Menus

### Sub-Menu de Cadastros (Tabela 07)

Neste sub-menu, você pode cadastrar informações sobre:

1. Alunos
2. Professores
3. Disciplinas
4. Cursos
5. Voltar ao Menu Principal

### Sub-Menu de Impressão (Tabela 08)

Aqui, você pode gerar impressões relacionadas a:

1. Alunos e Curso
2. Conteúdos
3. Disciplinas e Professores
4. Boletim
5. Voltar ao Menu Principal

## Emissão do Boletim

Para a emissão do boletim, o sistema verifica o status da situação do aluno, que pode ser "Aprovado", "Reprovado" ou "Cursando". Se o aluno estiver "Aprovado" ou "Reprovado", o boletim é emitido. Caso contrário, é exibida a mensagem "O Aluno ainda está Cursando".

## Variáveis de Entrada/Saída

As variáveis de entrada/saída incluem informações detalhadas para manipulação dos cadastros, tais como:

- Aluno (Matrícula, Nome Completo, CPF, Data de Nascimento)
- Professor (Matrícula, Nome Completo, CPF, Data de Nascimento)
- Curso (Código, Nome do Curso)
- Disciplina (Código, Nome da Disciplina, Curso)
- Boletim (Código do Boletim, Data do Boletim, Matrícula, Curso, Disciplina, Notas 1, 2, 3 e 4, Média das Quatro Notas)

