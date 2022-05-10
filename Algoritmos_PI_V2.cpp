/*==============================================================================================
  PRIMEIRA ENTREGA PI                                                                          |
  Programa que simula o cadastro de clientes da nossa loja de venda de moletons personalizados.|
  Integrantes: Diogo;                                                                          |
               Lucas Velocini;                                                                 |
			   Matheus Oliveira;                                                               |
			   Thiago Nogueira.	                                                               |
==============================================================================================*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int exc, alt, op, terminar=0;
	char codigoCAE [20], debug [1], codigo [20], nome [40], CEP [9], endereco [40], bairro [30], cidade [15], estado [20], telefone [15], email [20], confirmar [9];
	
	printf ("*-----Selecione o que deseja-----*\n");
	printf ("|  1- Cadastrar                  |\n");
	printf ("|  2- Consultar                  |\n");
	printf ("|  3- Alterar                    |\n");
	printf ("|  4- Excluir                    |\n");
	printf ("|  5- Sair                       |\n");
	printf ("*-----======================-----*\n\n");
	printf ("Opção: ");
	scanf ("%d", &op);
	system("cls");
	
	while (terminar!=5)
	{
		switch (op)
    {
    	case 1:
    		printf("---------Insira os dados---------\n");
    		printf("");
    		gets(debug);
			printf("Código do cliente: ");
    		gets(codigo);
    		printf("Nome: ");
    		gets(nome);
    		printf("CEP: ");
    		gets(CEP);
    		printf("Endereço: ");
    		gets(endereco);
    		printf("Bairro: ");
    		gets(bairro);
    		printf("Cidade: ");
    		gets(cidade);
    		printf("Estado: ");
    		gets(estado);
    		printf("Telefone: ");
    		gets(telefone);
    		printf("E-mail: ");
    		gets(email);
			break;
    	case 2:
    		printf("");
    		gets(debug);
			printf("Digite o código do cliente a ser consultado: ");
    		gets(codigoCAE);
    		
    		if (strncmp (codigo,codigoCAE,20) == 0)
			{
				printf("Código do cliente: %s\n", codigo);
    			printf("Nome: %s\n", nome);
    			printf("CEP: %s\n", CEP);
    			printf("Endereço: %s\n", endereco);
    			printf("Bairro: %s\n", bairro);
    			printf("Cidade: %s\n", cidade);
    			printf("Estado: %s\n", estado);
    			printf("Telefone: %s\n", telefone);
    			printf("E-mail: %s\n", email);
			}
			else
			{
				printf("Código de cliente inválido!");
			}
    		break;
    	case 3:
    		printf("");
    		gets(debug);
			printf("Digite o código do cliente a ser feita as alterações: ");
    		gets(codigoCAE);
    		
    		if (strncmp (codigo,codigoCAE,20) == 0)
			{
				printf("*-------O que deseja alterar-------*\n");
    			printf("|  1- Código do cliente            |\n");
    			printf("|  2- Nome                         |\n");
    			printf("|  3- CEP                          |\n");
    			printf("|  4- Endereço                     |\n");
    			printf("|  5- Bairro                       |\n");
    			printf("|  6- Cidade                       |\n");
    			printf("|  7- Estado                       |\n");
    			printf("|  8- Telefone                     |\n");
    			printf("|  9- E-mail                       |\n");
    			printf("*-------====================-------*\n ");
    			printf("\nOpção: ");
				scanf("%d", &alt);
    		
    			switch (alt)
    			{
    				case 1:
    					printf("");
    					gets(debug);
						printf("Digite o novo código do cliente: ");
    					gets(codigo);
    					printf("Alteração concluida com sucesso!\n");
						break;
   					case 2:
   						printf("");
    					gets(debug);
						printf("Digite o novo nome:  ");
   						gets(nome);
   						printf("Alteração concluida com sucesso!\n");
    					break;
   					case 3:
   						printf("");
    					gets(debug);
						printf("Digite o novo CEP: ");
   						gets(CEP);
   						printf("Alteração concluida com sucesso!\n");
    					break;
   					case 4:
   						printf("");
    					gets(debug);
						printf("Digite o novo endereço: ");
   						gets(endereco);
   						printf("Alteração concluida com sucesso!\n");
    					break;
   					case 5:
   						printf("");
    					gets(debug);
						printf("Digite o novo bairro: ");
   						gets(bairro);
   						printf("Alteração concluida com sucesso!\n");
    					break;
    				case 6:
    					printf("");
    					gets(debug);
						printf("Digite a nova cidade: ");
    					gets(cidade);
    					printf("Alteração concluida com sucesso!\n");
    					break;
    				case 7:
	    				printf("");
    					gets(debug);
						printf("Digite o novo estado: ");
    					gets(estado);
    					printf("Alteração concluida com sucesso!\n");
						break;
    				case 8:
    					printf("");
    					gets(debug);
						printf("Digite o novo telefone: ");
    					gets(telefone);
    					printf("Alteração concluida com sucesso!\n");
						break;
    				case 9:
    					printf("");
    					gets(debug);
						printf("Digite o novo e-mail: ");
    					gets(email);
   		 				printf("Alteração concluida com sucesso!\n");
						break;
    				default:
    					printf("Opção inválida! Digite um número de 1 a 9.");	
				}
			}
			else
			{
				printf("Código de cliente inválido!");
			}
			break;
    	case 4:
    		printf("");
    		gets(debug);
			printf("Digite o código do cliente a ser feita as exclusões: ");
    		gets(codigoCAE);
    		
    		if (strncmp (codigo,codigoCAE,20) == 0)
			{
				printf("*-------O que deseja excluir-------*\n");
    			printf("|  1- Código do cliente            |\n");
    			printf("|  2- Nome                         |\n");
    			printf("|  3- CEP                          |\n");
    			printf("|  4- Endereço                     |\n");
    			printf("|  5- Bairro                       |\n");
    			printf("|  6- Cidade                       |\n");
    			printf("|  7- Estado                       |\n");
    			printf("|  8- Telefone                     |\n");
    			printf("|  9- E-mail                       |\n");
    			printf("*-------====================-------*\n ");
    			printf("\nOpção: ");
				scanf("%d", &exc);
    		
    			switch (exc)
    			{
    				case 1:
    					printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(codigo, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
   					case 2:
   						printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(nome, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
   					case 3:
   						printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(CEP, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
   					case 4:
   						printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(endereco, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
   					case 5:
   						printf("");
  	  					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(bairro, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
	    			case 6:
   	 					printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(cidade, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
   		 			case 7:
    					printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(estado, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
    				case 8:
    					printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(telefone, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
    				case 9:
    					printf("");
    					gets(debug);
						printf("Digite *Confirmar* para excluir: ");
						gets(confirmar);
						if(strncmp (confirmar,"Confirmar",9) == 0 || strncmp (confirmar,"confirmar",9) == 0)
						{
							strcpy(email, "Sem registro"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
    				default:
    					printf("Opção inválida! Digite um número de 1 a 9.");
				}
			}
			else
			{
				printf("Código de cliente inválido!");
			}
    		break;
    	default:
    		printf("Opção inválida! Digite um número de 1 a 5.");	
	}
			printf ("\n\n*-----Selecione o que deseja-----*\n");
			printf ("|  1- Cadastrar                  |\n");
			printf ("|  2- Consultar                  |\n");
			printf ("|  3- Alterar                    |\n");
			printf ("|  4- Excluir                    |\n");
			printf ("|  5- Sair                       |\n");
			printf ("*-----======================-----*\n\n");
			printf ("Opção: ");
			scanf("%d", &terminar);
			op = terminar;
			
			system("cls");
	}
	printf("=================================================================\n");
	printf("Obrigado por utilizar nosso sistema! Pressione enter para fechar.");
	printf("\n=================================================================");
}
