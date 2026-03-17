/*
FACULDADE SENAC - CURSO DE ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
DISCIPLINA: SISTEMAS DE GERENCIAMENTO C/C++ 
PROFESSOR: VINICIUS FIGUEIREDO
AULA3: EXERCÍCIO - IMPLEMENTAÇÃO DO ALGORITMO DE VALIDAÇÃO DE CPF - COM ERRO
DATA: 12/03/2026
aluno: joão pedro silva barbosa
*/


    if (resto2 < 2) {
        dv2 = 0;
    } else {
        dv2 = 11 - resto2;
    }

    printf("O resto2 é: %d\n", resto2);
    printf("O segundo dígito verificador é: %d\n", dv2);

    return 0;
}