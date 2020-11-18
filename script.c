#include <stdio.h>

int main () {
    int l = 0, c = 0, escolha = 0;
    int A[2][2], B[3][3];

    printf("\nDeterminante de uma matriz");
    printf("\nvoce quer calcular o determinante de uma matriz 2x2 ou 3x3 ?");
    printf("\n[2] - 2x2 [3] 3x3\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 2:
        for (l = 0; l < 2; l++) {
            for (c = 0; c < 2; c++) {
                printf("Digite o elemento A%d%d\n", l + 1, c + 1);
                scanf("%d", &A[l][c]);
                }
            }
        break;
    
    case 3:
        for (l = 0; l < 3; l++) {
            for (c = 0; c < 3; c++) {
                printf("Digite o elemento B%d%d", l + 1, c + 1);
                scanf("%d", &B[l][c]);
            }
        }

        break;

    default:
        break;
    }

    printf("Matrix\n");

    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("%d ", A[l][c]);
            if (c == 1) {
                printf("\n");
            }
        }
    }

    return 0;
}