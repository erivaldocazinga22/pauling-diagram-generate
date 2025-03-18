#include<stdio.h>
void main() {
    enum Boolean { true, false };
    int numAtomic = 0;

    printf("Digite o numero atomico do elemento: ");
    scanf("%d", &numAtomic);

    /*
     * 1s            : 2
     * 2s 2p         : 2 - 6
     * 3s 3p 3d      : 2 - 6 - 10
     * 4s 4p 4d 4f   : 2 - 6 - 10 - 14
     * 5s 5p 5d 4f
     * 6s 6p 6d
     * 7s 7p
     *
     * 
     */
    int firstLevel = 2;
    int secondLevel = 8;
    int thirdLevel = 18;
    int fourthLevel = 32;
    int fifthLevel = 32;
    int sixthLevel = 18;
    int seventhLevel = 8;

    if (numAtomic >= 1) {
        // 1º Nivel
        printf("\n\n1s%d", numAtomic > 2 ? 2 : numAtomic);
        if (numAtomic > firstLevel) {
            // 2º Nivel 
            short isStop2S = (numAtomic - 2) >= 1 && (numAtomic - 2) <= 2;
            printf("\n2s%d", isStop2S ? numAtomic - 2 : 2);

            if (!isStop2S) {
                short isStop2P = (numAtomic - 4) >= 1 && (numAtomic - 4) <= 6;
                printf(" 2p%d", isStop2P ? numAtomic - 4 : 6);
            }
            
            if (numAtomic > secondLevel + firstLevel) {
                // 3º Nivel : +11
                short isStop3S = (numAtomic - 10) >= 1 && (numAtomic - 10) <= 2;
                printf("\n3s%d", isStop3S ? numAtomic - 10 : 2);
                
                if (isStop3S) {
                    short isStop3P = (numAtomic - 12) >= 1 && (numAtomic - 12) <= 6;
                    printf(" 3p%d", isStop3P ? numAtomic - 4 : 6);
                }
                printf("\n3s2 3p6 3d10");
                if (numAtomic > thirdLevel) {
                    // 4º Nivel
                    printf("\n4s2 4p6 4d10 4f14");
                    if (numAtomic > fourthLevel) {
                        // 5º Nivel
                        printf("\n5s2 5p6 5d10 5f14");
                        if (numAtomic > fifthLevel) {
                            // 6º Nivel
                            printf("\n6s2 6p6 6d10");
                            if (numAtomic > sixthLevel) {
                                // 7º Nivel
                                printf("\n7s2 7p6");
                            }
                        }
                    }
                }
            }
        };
    };
    
    /* for (short i = 1; i <= 7; i++) {
        for (int j = 1; j <= numAtomic; j++){
            printf("%ds\n", i);
        }
    }; */    
}
