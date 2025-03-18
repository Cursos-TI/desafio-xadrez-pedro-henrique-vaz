#include <stdio.h>

void recursividadeTorre(int casas){ 
    if (casas == 0) return;
    printf("Direita, ");
    recursividadeTorre(casas - 1);
}

void recursividadeRainha(int casas){
    if (casas == 0) return;
    printf("Esquerda, ");
    recursividadeRainha(casas - 1);
}

void recursividadeBispo(int casas){
    if (casas == 0) return;
    for (int i = 0; i < 1; i++){
        printf("Cima, ");
        for (int j = 0; j < 1; j++){
            printf("Direita\n");
        }
    }
    recursividadeBispo(casas - 1);
}

void recursividadeCavalo(){
    for (int i = 0; i < 2; i++){
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++){
        printf("Direita\n");
    }
}

int main() {

    printf("\nMovimentacao da Torre:\n");
    recursividadeTorre(5);

    printf("\n____________________________");
    printf("\nMovimentacao do Bispo:\n");
    recursividadeBispo(5);

    printf("\n____________________________");
    printf("\nMovimentacao da Rainha:\n");
    recursividadeRainha(8);

    printf("\n____________________________");
    printf("\nMovimentacao do Cavalo:\n");
    recursividadeCavalo();

    return 0;
}
