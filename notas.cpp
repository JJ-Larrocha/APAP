#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cria_titulo(char titulo[]);

int main() {
    char titulo[54];
    int opc;

    puts("===============");
    puts("[1]- Nova Nota\t[2]- Ver Notas\n");
    puts("[3]- Excluir Notas\t[4]- Sair\n");
    scanf("%d%*c", &opc);
    puts("---------------\n");

    switch(opc){
        case (1):
            printf("%s", cria_titulo(titulo));

        break;

        case (2):
        break;

        case (3):
        break;

        case (4):
        break;

        default: 
            puts("Opcao Inexistente!");
    }

    puts("Continua aqui");

return 0;
}

char *cria_titulo(char titulo[]){
    printf("Titulo da nota: ");
    fgets(titulo, 50, stdin);

    strcat("nano ", titulo);

    return titulo;
}