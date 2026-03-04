#include<stdio.h>

int main () {

    int mat1[3][3];
    int i;
    int j;
    int simetria = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            printf("Digite números inteiros para preencher a matriz de linha %d e coluna %d\n", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (mat1[i][j] != mat1[j][i]){
                simetria = 0;
            }
        }
    }
    if (simetria == 1){
        printf("A matriz é simétrica!");
    } else {
        printf("A matriz não é simetrica!");
    }

    
}