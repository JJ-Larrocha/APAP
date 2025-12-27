#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *listaNotas;
    int opc;

    listaNotas = fopen(".listaNotas.dat", "a");

    puts("===============");
    puts("[1]- Nova Nota\t[2]- Ver Notas\n");
    puts("[3]- Excluir Notas\t[4]- Sair\n");
    scanf("%d%*c", &opc);
    puts("---------------\n");

    switch(opc){
        case (1):
            system("./nova-nota.sh");

        break;

        case (2):
            system("ls /home/pedro/Documents/Anotacoes/");
        break;

        case (3):

        break;

        case (4):
        break;

        default: 
            puts("Opcao Inexistente!");
    }

    puts("Continua aqui");

fclose(listaNotas);
return 0;
}
