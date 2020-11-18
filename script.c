#include <stdio.h>

int main () {
    int l = 0, c = 0, escolha = 0;
    int A[2][2], B[3][3];
    printf("Determinante de uma matriz");

    printf("voce quer calcular o determinante de uma matriz 2x2 ou 3x3 ?");
    printf("[2] - 2x2 [3] 3x3");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 2:
        for (l = 0; l < 2; l++) {
            for (c = 0; c < 2; c++) {
                printf("Digite o elemento A%d%d", l, c);
                scanf("%d", &A[l][c]);
            }
        }
        break;
    
    case 3:
        for (l = 0; l < 3; l++) {
            for (c = 0; c < 3; c++) {
                printf("Digite o elemento B%d%d". l, c);
                scanf("%d", &B[l][c])
            }
        }
        break;

    default:
        break;
    }

    printf("sequencia de scans: \n");
    printf("a11, a12, a13, a21, a22, a23, a31, a32, a33");

    

    return 0;
}