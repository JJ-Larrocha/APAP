#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct celula{
    char nome[50];
    struct celula *prox;
};typedef struct celula cel;

void append(cel *celula, char nome[]);
void Lista_Titulos(cel *celula, FILE *listaNotas);

int main() {
    FILE *listaNotas;
    int opc, sair=0;
    cel *titulos = NULL;

    titulos = (cel*) malloc (sizeof(cel));
    titulos->prox = NULL;

    listaNotas = fopen(".listaNotas.dat", "a");
    
    while(!sair){
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
                Lista_Titulos(titulos, listaNotas);
                while (titulos->prox != NULL) {
                    printf("%s\n", titulos->nome);

                    titulos->prox = titulos->prox->prox;
                }
                
            break;

            case (4):
                sair = 1;
            break;

            default: 
                puts("Opcao Inexistente!");
        }
    }

fclose(listaNotas);
return 0;
}

void Lista_Titulos(cel *celula, FILE *listaNotas){
    puts("ListaTitulos");
    int nread;
    char nome[50];

    while(!feof(listaNotas)){
        
        puts("to no loop");
        nread = fscanf(listaNotas, "%s", nome);
        printf("nome: %s\n", nome);
        append(celula, nome);

        if(nread==0){
            return;
        }
    }
}

void append(cel *celula, char nome[]){
    cel *nova = (cel*) malloc (sizeof(cel));
    nova->prox = NULL;
    
    puts("antes do while");
    while(celula->prox != NULL){
        celula = celula->prox;
    }
    puts("depois do while");

    celula->prox = nova;
    strcpy(celula->nome, nome);
}