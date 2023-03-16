#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Meio.c"


int menuPrincipal()
{
    int op;
    printf("M E N U\n");
    printf("1 Meios de Mobilidade Elétrica\n");
    printf("2 Clientes\n");
    printf("3 Gestores\n");
    printf("0 Sair\n");
    printf("Opcao: ");
    scanf("%d", &op);
    return op;
}

int subMenuMeios()
{
    int op;
    printf("\nM E N U - Meios de Mobilidade Eletrica\n");
    printf("1 Inserir Meio\n");
    printf("2 Listar Meios\n");
    printf("3 Remover Meio\n");
    printf("4 Guardar Meios\n");
    printf("5 Ler Meios\n");
    printf("0 Voltar ao menu principal\n");
    printf("Opcao: ");
    scanf("%d", &op);
    return op;
}

int subMenuClientes()
{
    int op;
    printf("\nM E N U - Clientes\n");
    printf("1 Inserir Novo Cliente\n");
    printf("2 Listar Clientes\n");
    printf("3 Remover Cliente\n");
    printf("4 Guardar Clientes\n");
    printf("5 Ler Clientes\n");
    printf("0 Voltar ao menu principal\n");
    printf("Opcao: ");
    scanf("%d", &op);
    return op;
}
///////////////////////////

int subMenuGestores()
{
    int op;
    printf("\nM E N U - Gestores\n");
    printf("1 Inserir Novo Gestor\n");
    printf("2 Listar Gestores\n");
    printf("3 Remover Gestor\n");
    printf("4 Guardar Gestores\n");
    printf("5 Ler Gestor\n");
    printf("6 Alugar Meio\n");
    printf("7 Mostrar Alugures\n");
    printf("0 Voltar ao menu principal\n");
    printf("Opcao: ");
    scanf("%d", &op);
    return op;
}

int main() {

    //Gestor a;
    //Cliente b;
    //int passwordG = 12345;
    //int passwordC = 54321;

    int opcao = 0;
	int utilizador;
    int passwordMenu;
     int opcao_principal, opcao_sub;

	Meio* meios = NULL;

	int cod;
	char tipo[50],modelo[50];
	float bat,aut;
	
    do {
        opcao_principal = menuPrincipal();

        switch (opcao_principal) {
            case 1:
                do {
                    opcao_sub = subMenuMeios();

                    switch (opcao_sub) {
                        case 1:
                            printf("Codigo?\n");
	                        scanf("%d",&cod);
	                        scanf("%*c"); 
	                        printf("Modelo\n");
	                        scanf("%[^\n]s",modelo);
	                        printf("Nivel da bateria?\n");
	                        scanf("%d",&bat);
	                        printf("Autonomia\n");
	                        scanf("%f",&aut);
                            meios = inserirMeio(meios,cod,modelo,bat,aut);
                            break;
                        case 2:
                            listarMeios(meios);
                            break;
                        case 3:
                            printf("[Codigo do meio de mobilidade a remover?]\n");
	                        //scanf("%d",&cod);
	                        //meios = removerMeio(meios, cod);
                            break;
                        case 4:
                            //guardarMeios(meios);
                            break;
                        case 5:
                            //meios = lerMeios();
                            break;
                        case 0:
                            // Voltar ao menu principal
                            break;
                        default:
                            printf("Opcao invalida.\n");
                            break;
                    }
                } while (opcao_sub != 0);
                break;

           case 2:
                do{
                    opcao_sub = subMenuClientes();

                    switch(opcao_sub){
                        case 1:
                            break;
                        case 2:
                           
                            break;
                        case 3:

                            break;
                        case 4:
                        
                        break;
                        case 5:
                     
                        break;
                    }
                } while (opcao_sub != 0);
                break;
            case 3:
                do{
                    opcao_sub = subMenuGestores();

                    switch(opcao_sub){
                        case 1:

                        break;
                        case 2:
                        
                            break;
                        break;
                        case 3:
                    
                        break;
                        case 4:
                        
                        break;
                        case 5:
                        
                        break;
                        case 6:
               
                            break;    
                    }        
                } while (opcao_sub != 0);
                // Submenu para gerenciar gestores
                break;
            case 0:
                // Sair do programa
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao_principal != 0);

    
    return 0;
}
