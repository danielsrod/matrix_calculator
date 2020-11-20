#include <stdio.h>

int main () {
    int l = 0, c = 0, escolha = 0;
    int A[2][2], B[3][3];
    int detA = 0, detB = 0, detBpos = 0, detBneg = 0;

    printf("\nDeterminante de uma matriz");
    printf("\nvoce quer calcular o determinante de uma matriz 2x2 ou 3x3 ?");
    printf("\n[2] - 2x2 [3] 3x3\n");
    scanf("%d", &escolha);

    switch (escolha) {
        
        case 2: // Matriz 2x2
            for (l = 0; l < 2; l++) {
                for (c = 0; c < 2; c++) {
                    printf("Digite o elemento A%d%d\n", l + 1, c + 1);
                    scanf("%d", &A[l][c]);
                    }
                }

            printf("\n");

            for (l = 0; l < 2; l++) {
                for (c = 0; c < 2; c++) {
                    printf("%d ", A[l][c]);
                    if (c == 1) {
                        printf("\n");
                    }
                }
            }


            detA = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]) ;

            printf("\nDeterminante 2x2 = %d\n", detA);

            break;
    
        case 3: // Matriz 3x3
            for (l = 0; l < 3; l++) {
                for (c = 0; c < 3; c++) {
                    printf("Digite o elemento B%d%d\n", l + 1, c + 1);
                    scanf("%d", &B[l][c]);
                }
            }

            printf("\n");

            for (l = 0; l < 3; l++) {
                for (c = 0; c < 3; c++) {
                    printf("%d ", B[l][c]);
                    if (c == 2) {
                        printf("\n");
                    }
                }
            }

            detBpos = (B[0][0] * B[1][1] * B[2][2]) + (B[0][1] * B[1][2] * B[2][0]) + (B[0][2] * B[2][1] * B[1][0]);
            detBneg = (B[0][2] * B[1][1] * B[2][0]) + (B[0][1] * B[1][0] * B[2][2]) + (B[0][0] * B[2][1] * B[1][2]);
            detB = detBpos - detBneg;

            printf("\nDeterminante 3x3 = %d\n\n", detB);

            break;

        default:
            printf("WTF");
            break;
    }

    return 0;
}