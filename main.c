#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// OPERACOES COM MATRIZES



int tamanho_a() // O USUARIO DEFINE O NUMERO DE LINHAS E COLUNAS DA MATRIZ A
{
    int i, j;
    float matrizA[i][j];
    float A[100][100];
    printf ("Informe o numero de linhas da Matriz A: \n");
    scanf ("%d", &i);
    printf ("Informe o numero de colunas da Matriz A: \n");
    scanf ("%d", &j);
    A[100][100] = matrizA[i][j];
    printf ("\n");
    
    return 0;
}

int tamanho_b(){ // O USUARIO DEFINE O TAMANHO DA MATRIZ B
    int i,j;
    float matrizB[i][j];
    float B[100][100];
    
    printf ("Informe o numero de linhas da Matriz B: \n");
    scanf ("%d", &i);
    printf ("Informe o numero de colunas da Matriz B: \n");
    scanf ("%d", &j);
    B[100][100] = matrizB[i][j];
    printf ("\n");
    
    return 0;
}

int a_random(){ // O SISTEMA DA UM VALOR ALEATORIO PARA A MATRIZ A
    int i, j, l, c, l1, c1, X, opcao, max, min, intervalo;
    int A[l][c], B[l1][c1];
    
    printf ("Defina o intervalo: \n");
    scanf ("%d%d", &min, &max);
    while (max < min){
        printf ("Intervalo invalido. Digite novos valores: \n");
        scanf ("%d%d", &min, &max);
        
    }
    
    intervalo = max - min;
    printf ("Intervalo: %d %d \n", intervalo);
    
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            A[l][c] = rand()%intervalo + min;
        }
    }
    
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf ("%1.d", A[l][c]);
        }
        printf ("\n");
    }
}

int b_random(){ // O SISTEMA DA UM VALOR ALEATORIO PARA A MATRIZ B
    int i, j, l, c, l1, c1, X, opcao, max, min, intervalo;
    int A[l][c], B[l1][c1];
    
    printf ("Defina o intervalo: \n");
    scanf ("%d%d", &min, &max);
    while (max < min){
        printf ("Intervalo invalido. Digite novos valores: \n");
        scanf ("%d%d", &min, &max);
        
    }
    
    intervalo = max - min;
    printf ("Intervalo: %d %d \n", intervalo);
    
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            A[l][c] = rand()%intervalo + min;
        }
    }
    
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf ("%1.d", A[l][c]);
        }
        printf ("\n");
    }
}

int definir_a(){ // O USUARIO DEFINE OS VALORES DA MATRIZ A
    
    int i, j, k;
    float matrizA[i][j];
    for(k=0; k<i; k++)
    {
        for(k = 0; k < j; k++)
        {
            printf("\n\n Informe o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", i+1, 167, j+1, 167);
            scanf("%f", &matrizA[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

int definir_b(){ // O USUARIO DEFINE OS VALORES DA MATRIZ B
    
    int i, j, k;
    float matrizB[i][j];
    for(k=0; k<i; k++)
    {
        for(k = 0; k < j; k++)
        {
            printf("\n\n Informe o valor da %d%c Linha e da %d%c Coluna da 2%c Matriz B: ", i+1, 167, j+1, 167, 167);
            scanf("%f", &matrizB[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int soma() // EXECUTA A SOMA DAS MATRIZES A E B
{
    int h, i, j, k;
    float primeira[10][10], segunda[10][10], soma[10][10];
    
    printf("Defina a quantidade de linhas e colunas da matriz\n");
    scanf("%d%d", &h, &i);
    printf("Defina os componentes da primeira matriz\n");
    
    for (j = 0; j < h; j++)
        for (k = 0; k < i; k++)
            scanf("%f", &primeira[j][k]);
    printf("Defina os componentes da segunda matriz\n");
    
    for (j = 0; j < h; j++)
        for (k = 0; k < i; k++)
            scanf( "%f", &segunda[j][k]);
    printf("Solucao da soma das matrizes:\n");
    
    for (j = 0; j < h; j++) {
        for (k = 0; k < i; k++) {
            soma[j][k] = primeira[j][k] + segunda[j][k];
            printf("%f\t", soma[j][k]);
        }
        printf("\n");
    }
    return 0;
}

int sub(){ // EXECUTA A SUBTRACAO DAS MATRIZES A E B
    
    int i, j;
    float sub, matrizA[i][j], matrizB[i][j];
    
    sub = matrizA[i][j] - matrizB[i][j];
    
    return 0;
}

int mult(){ // EXECUTA A MULTIPLICACAO DAS MATRIZES A E B
    
    int i, l, X, j, c1, l1, Aux;
    float matrizA[i][X];
    float matrizB[X][j];
    float matrizC[i][j];
    
    for(i=0; i<l; i++)
    {
        for(j=0; j<c1; j++)
        {
            matrizC[i][j]=0;
            for(X=0; X<l1; X++)
            {
                Aux += matrizA[i][X] * matrizB[X][j];
            }
            matrizC[i][j]=Aux;
            Aux=0;
        }
    }
    printf("\n\n");
    for(i=0; i<l; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%6.f", matrizC[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
    
    return 0;
}

int imprimir_a(){ // IMPRIME A MATRIZ A
    
    int i, l, j, c;
    float matrizA[i][j];
    
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%6.f", matrizA[i][j]);
        }
        printf("\n\n");
    }
}

int imprimir_b(){ // IMPRIME A MATRIZ B
    int i, j, c1, l1;
    float matrizB[i][j];
    
    for(i=0; i<l1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%6.f", matrizB[i][j]);
        }
        printf("\n\n");
    }
}

int imprimir_c(){ // IMPRIME A OPERACAO REALIZADA ENTRE AS MATRIZES A E B
    
}

int arquivo_a(){ // ABRE UM ARQUIVO NA MATRIZ A
    
    
}

int arquivo_b(){ // ABRE UM ARQUIVO NA MATRIZ B
    
}

int escrever_arquivo(){ // ESCREVE UMA MATRIZ EM UM ARQUIVO
    
}

int menu() // MENU DE OPERACOES
{
    int opcao;
    
    printf ("PROGRAMA DE MANIPULACAO DE MATRIZES \n");
    
    printf ("1 - Definir o tamanho da matriz A \n");
    printf ("2 - Definir o tamanho da matriz B \n");
    printf ("3 - Preencher a matriz A com valores aleatorios \n");
    printf ("4 - Preencher a matriz B com valores aleatorios \n");
    printf ("5 - Atribuir valores manualmente para os elementos da matriz A \n");
    printf ("6 - Atribuir valores manualmente para os elementos da matriz B \n");
    printf ("7 - Calcular A+B \n");
    printf ("8 - Calcular A-B \n");
    printf ("9 - Calcular A*B \n");
    printf ("10 - Imprimir matriz A \n");
    printf ("11 - Imprimir matriz B \n");
    printf ("12 - Imprimir matriz C \n");
    printf ("13 - Ler a matriz A de um arquivo \n");
    printf ("14 - Ler a matriz B de um arquivo \n");
    printf ("15 - Escrever a matriz C em um arquivo \n");
    printf ("16 - Sair \n");
    printf ("\n");
    printf ("Digite o numero da funcao que voce quer executar: \n");
    scanf ("%d", &opcao);
    
    while ((opcao < 1) || (opcao > 16)){
        printf ("COMANDO INVALIDO, TENTE NOVAMENTE: \n");
        printf ("\n");
        printf ("PROGRAMA DE MANIPULACAO DE MATRIZES \n");
        printf ("1 - Definir o tamanho da matriz A \n");
        printf ("2 - Definir o tamanho da matriz B \n");
        printf ("3 - Preencher a matriz A com valores aleatorios \n");
        printf ("4 - Preencher a matriz B com valores aleatorios \n");
        printf ("5 - Atribuir valores manualmente para os elementos da matriz A \n");
        printf ("6 - Atribuir valores manualmente para os elementos da matriz B \n");
        printf ("7 - Calcular A+B \n");
        printf ("8 - Calcular A-B \n");
        printf ("9 - Calcular A*B \n");
        printf ("10 - Imprimir matriz A \n");
        printf ("11 - Imprimir matriz B \n");
        printf ("12 - Imprimir matriz C \n");
        printf ("13 - Ler a matriz A de um arquivo \n");
        printf ("14 - Ler a matriz B de um arquivo \n");
        printf ("15 - Escrever a matriz C em um arquivo \n");
        printf ("16 - Sair \n");
        printf ("\n");
        printf ("Digite o numero da funcao que voce quer executar: \n");
        scanf ("%d", &opcao);
    }
    
    return 0;
}



int main (){
    
    int opcao;
    int tamanho_a();
    int tamanho_b();
    int a_random();
    int b_random();
    int definir_a();
    int definir_b();
    int soma();
    int sub();
    int mult();
    int imprimir_a();
    int imprimir_b();
    int imprimir_c();
    int arquivo_a();
    int arquivo_b();
    int escrever_arquivo();
    int menu();
    
    
    printf ("PROGRAMA DE MANIPULACAO DE MATRIZES \n");
    printf ("1 - Definir o tamanho da matriz A \n");
    printf ("2 - Definir o tamanho da matriz B \n");
    printf ("3 - Preencher a matriz A com valores aleatorios \n");
    printf ("4 - Preencher a matriz B com valores aleatorios \n");
    printf ("5 - Atribuir valores manualmente para os elementos da matriz A \n");
    printf ("6 - Atribuir valores manualmente para os elementos da matriz B \n");
    printf ("7 - Calcular A+B \n");
    printf ("8 - Calcular A-B \n");
    printf ("9 - Calcular A*B \n");
    printf ("10 - Imprimir matriz A \n");
    printf ("11 - Imprimir matriz B \n");
    printf ("12 - Imprimir matriz C \n");
    printf ("13 - Ler a matriz A de um arquivo \n");
    printf ("14 - Ler a matriz B de um arquivo \n");
    printf ("15 - Escrever a matriz C em um arquivo \n");
    printf ("16 - Sair \n");
    printf ("\n");
    printf ("Digite o numero da funcao que voce quer executar: \n");
    scanf ("%d", &opcao);
    
    while ((opcao < 1) || (opcao > 16)){
        printf ("COMANDO INVALIDO, TENTE NOVAMENTE: \n");
        printf ("\n");
        printf ("PROGRAMA DE MANIPULACAO DE MATRIZES \n");
        printf ("1 - Definir o tamanho da matriz A \n");
        printf ("2 - Definir o tamanho da matriz B \n");
        printf ("3 - Preencher a matriz A com valores aleatorios \n");
        printf ("4 - Preencher a matriz B com valores aleatorios \n");
        printf ("5 - Atribuir valores manualmente para os elementos da matriz A \n");
        printf ("6 - Atribuir valores manualmente para os elementos da matriz B \n");
        printf ("7 - Calcular A+B \n");
        printf ("8 - Calcular A-B \n");
        printf ("9 - Calcular A*B \n");
        printf ("10 - Imprimir matriz A \n");
        printf ("11 - Imprimir matriz B \n");
        printf ("12 - Imprimir matriz C \n");
        printf ("13 - Ler a matriz A de um arquivo \n");
        printf ("14 - Ler a matriz B de um arquivo \n");
        printf ("15 - Escrever a matriz C em um arquivo \n");
        printf ("16 - Sair \n");
        printf ("\n");
        printf ("Digite o numero da funcao que voce quer executar: \n");
        scanf ("%d", &opcao);
        
    }
    
    switch (opcao){
    
    case 1:
        tamanho_a();
        menu();
        break;
        
    case 2:
        tamanho_b();
        menu();
        break;
        
    case 3:
        a_random();
        menu();
        break;
        
    case 4:
        b_random();
        menu();
        break;
        
    case 5:
        definir_a();
        menu();
        break;
        
    case 6:
        definir_b();
        menu();
        break;
        
    case 7:
        soma();
        menu();
        break;
        
    case 8:
        sub();
        menu();
        break;
        
    case 9:
        mult();
        menu();
        break;
        
    case 10:
        imprimir_a();
        menu();
        break;
        
    case 11:
        imprimir_b();
        menu();
        break;
        
    case 12:
        imprimir_c();
        menu();
        break;
        
    case 13:
        arquivo_a();
        menu();
        break;
        
    case 14:
        arquivo_b();
        menu();
        break;
        
    case 15:
        escrever_arquivo();
        menu();
        break;
        
    case 16:
        break;
        
    }
    return 0;
}
