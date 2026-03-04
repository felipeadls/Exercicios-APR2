#include <stdio.h>

int main()
{

    int vetor[10], i = 0, indiceFinal = 0, num;

    printf("Digite 10 números inteiro de forma crescente:\n");

    do
    {
        scanf("%d", &vetor[i]);
        if (i != 0)
        {
            while (vetor[i] <= vetor[i - 1])
            {
                printf("O número é menor ou igual ao anterior\n");
                printf("Digite o número da posição %d novamente:\n", i);
                scanf("%d", &vetor[i]);
            }
        }

        indiceFinal++;
        i++;
    } while (i < 10);
    printf("Digite qual valor deseja remover do vetor:\n");
    scanf("%d", &num);
    for (i = 0; i < indiceFinal; i++)
    {
        if (i == num)
        {
            i = i + 1;
        }
        printf("%d ", vetor[i]);
    }
}