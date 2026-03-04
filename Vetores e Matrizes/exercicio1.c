#include <stdio.h>

int main() {
    int vetor[8];
    int positivos[8];
    int negativos[8];
    int i;

    int contPos = 0;
    int contNeg = 0;


    printf("Digite 8 numeros inteiros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);

 
        if (vetor[i] > 0) {
            positivos[contPos] = vetor[i];
            contPos++;
        } 
        else {
        
        } if (vetor[i] < 0) {
            negativos[contNeg] = vetor[i];
            contNeg++;
            
        }
    }
    printf("Vetor de positivos:\n");
    for (i = 0; i < contPos; i++) {
        printf("%d ", positivos[i]);
    }

    printf("Vetor de negativos:\n");
    for (i = 0; i < contNeg; i++) {
        printf("%d ", negativos[i]);
    }
}