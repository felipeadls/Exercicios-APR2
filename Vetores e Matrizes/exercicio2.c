#include <stdio.h>

int main () {

    int vet1 [10];
    int vet2 [10];
    int vet3 [20];
    int contExtra = 0;
    int i;
    int j;

    for (i = 0; i < 10; i++) {
        printf("Digite um número inteiro: \n");
        scanf("%d", &vet1[i]);
    }
    for (j = 0; j < 10; j++) {
        printf("Digite um número inteiro: \n");
        scanf("%d", &vet2[j]);
    }
    for (i = 0; i < 10; i++) {
        vet3[contExtra] = vet1[i];
        contExtra++;
        vet3[contExtra] = vet2[i];
        contExtra++;
    }
    for (i = 0; i < 20; i++) {
    printf("%d ", vet3[i]);
}

}