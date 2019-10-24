#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int escolha;

    printf("=== MENU DO BANCO ===\n");
    printf("1- CADASTRAR CLIENTE\n");
    printf("2- CADASTRAR CONTA\n");
    printf("3- LISTAR CONTAS\n");
    printf("4- PESQUISAR CONTA\n");
    printf("5- DEPOSITAR\n");
    printf("6- DEBITAR (SACAR)\n");
    printf("7- TRANSFERIR\n");
    printf("8- REMOVER CONTA\n");
    printf("9- SAIR\n");
    printf("\nESCOLHA UMA OPÇÃO: ");
    scanf("%i", &escolha);

    switch(escolha){
    case 9:
        exit(0);
    }

    return 0;
}
