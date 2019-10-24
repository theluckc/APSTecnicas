#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cliente.h"
#include "banco.h"
#include "conta.h"
#include "gerenciaCliente.h"

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int escolha = 0, j = 0;
    TCliente cliente[10];

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
    case 1:
        printf("Digite o nome do cliente: ");
        gets(cliente[j].nome);
        printf("Digite o seu cpf: ");
        gets(cliente[j].cpf);
        printf("Digite o seu telefone: ");
        gets(cliente[j].telefone);
        adicionarCliente(TCliente cliente[j]);//chama a função de adicionar clientes com o valor das variáveis acima
        if(j = 10){
            printf("Número de clientes excedido!");
            break;
        }
        j++;
        break;
    case 9:
        exit(0);
        break;
    }

    return 0;
}

void adicionarCliente(TCliente cliente){

}
