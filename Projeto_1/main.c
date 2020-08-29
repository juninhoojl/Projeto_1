//
//  main.c
//  27/08/20
//  Disciplina: CIC110 - Análise e Projeto de Algoritmos I
//  Grupo: José Luiz Junior e Isabela Corsi
//  Entrega ate dia
//  Prazo de Entrega: 16/09/2020 23:59:59

#include <stdio.h>
#include <stdlib.h>


//faz um shift de tamanho sh para a esquerda em um inteiro A com n digitos
void shift(int sh, int n, signed char *A){
  for(int i = 0; i < n-sh; i++){
    A[i] = A[i+sh];
  }

  for(int i = n - sh; i < n; i++){
    A[i] = 0;
  }
  
}


int main(int argc, const char * argv[]) {
    
    // Le quantidade de digitos a multiplicar
    // Aloca memoria para os 2 valores e o resultado
    
    unsigned int qdig = 0;
    // Quantidade de digitos
    scanf("%u",&qdig);

    // Quantidade de digitos mais um
    signed char * num1 = calloc(qdig, sizeof(signed char));
    signed char * num2 = calloc(qdig, sizeof(signed char));
    signed char * res = calloc(2*qdig, sizeof(signed char));

    char aux;
    //Le num1
    getchar();
    for(int i = 0; i < qdig; i++){
      scanf("%c", &aux);
      num1[i] = atoi(&aux);
    }
    
    //Le num2
    getchar();
    for(int i = 0; i < qdig; i++){
      scanf("%c", &aux);
      num2[i] = atoi(&aux);
    }
    
    for(int i = 0; i < qdig; i++){
        printf("%u",num1[i]);
        printf("%u",num2[i]);
    }
    printf("\n\n");
    
    printf("Hello, World!\n");
    return 0;
}
