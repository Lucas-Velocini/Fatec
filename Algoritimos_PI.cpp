#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int exc, alt, op, terminar=0;
	char codigoCAE [20], debug [1], codigo [20], nome [40], CEP [9], endereco [40], bairro [30], cidade [15], estado [20], telefone [15], email [20];
	
	printf ("*-----Selecione o que deseja-----*\n");
	printf ("|  1 - Cadastrar                 |\n");
	printf ("|  2 - Consultar                 |\n");
	printf ("|  3 - Alterar                   |\n");
	printf ("|  4 - Excluir                   |\n");
	printf ("|  5 - Sair                      |\n");
	printf ("*--------------------------------*\n\n");
	printf ("Op��o: ");
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
			printf("C�digo do cliente: ");
    		gets(codigo);
    		printf("Nome: ");
    		gets(nome);
    		printf("CEP: ");
    		gets(CEP);
    		printf("Endere�o: ");
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
    		
    		printf ("\n\n*-----Selecione o que deseja-----*\n");
			printf ("|  1 - Cadastrar                 |\n");
			printf ("|  2 - Consultar                 |\n");
			printf ("|  3 - Alterar                   |\n");
			printf ("|  4 - Excluir                   |\n");
			printf ("|  5 - Sair                      |\n");
			printf ("*--------------------------------*\n\n");
			printf ("Op��o: ");
			scanf("%d", &terminar);
			op = terminar;
			system("cls");
			break;
    	case 2:
    		printf("");
    		gets(debug);
			printf("Digite o c�digo do cliente a ser consultado: ");
    		gets(codigoCAE);
    		
    		if (strncmp (codigo,codigoCAE,20) == 0)
			{
				printf("C�digo do cliente: %s\n", codigo);
    			printf("Nome: %s\n", nome);
    			printf("CEP: %s\n", CEP);
    			printf("Endere�o: %s\n", endereco);
    			printf("Bairro: %s\n", bairro);
    			printf("Cidade: %s\n", cidade);
    			printf("Estado: %s\n", estado);
    			printf("Telefone: %s\n", telefone);
    			printf("E-mail: %s\n", email);
    			
    			printf ("\n\n*-----Selecione o que deseja-----*\n");
				printf ("|  1- Cadastrar                  |\n");
				printf ("|  2- Consultar                  |\n");
				printf ("|  3- Alterar                    |\n");
				printf ("|  4- Excluir                    |\n");
				printf ("|  5- Sair                       |\n");
				printf ("*--------------------------------*\n\n");
				printf ("Op��o: ");
				scanf("%d", &terminar);
				op = terminar;
				system("cls");
			}
			else
			{
				printf("C�digo de cliente inv�lido!");
				printf ("\n\n*-----Selecione o que deseja-----*\n");
				printf ("|  1- Cadastrar                  |\n");
				printf ("|  2- Consultar                  |\n");
				printf ("|  3- Alterar                    |\n");
				printf ("|  4- Excluir                    |\n");
				printf ("|  5- Sair                       |\n");
				printf ("*--------------------------------*\n\n");
				printf ("Op��o: ");
				scanf("%d", &terminar);
				op = terminar;
				system("cls");
			}
    		break;
    	case 3:
    		printf("");
    		gets(debug);
			printf("Digite o c�digo do cliente a ser feita as altera��es: ");
    		gets(codigoCAE);
    		
    		if (strncmp (codigo,codigoCAE,20) == 0)
			{
				printf("*-------O que deseja alterar-------*\n");
    			printf("|  1- C�digo do cliente            |\n");
    			printf("|  2- Nome                         |\n");
    			printf("|  3- CEP                          |\n");
    			printf("|  4- Endere�o                     |\n");
    			printf("|  5- Bairro                       |\n");
    			printf("|  6- Cidade                       |\n");
    			printf("|  7- Estado                       |\n");
    			printf("|  8- Telefone                     |\n");
    			printf("|  9- E-mail                       |\n");
    			printf("*-------====================-------*\n ");
    			printf("\nOp��o: ");
				scanf("%d", &alt);
    		
    			switch (alt)
    			{
    				case 1:
    					printf("");
    					gets(debug);
						printf("Digite o novo c�digo do cliente: ");
    					gets(codigo);
    					printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
   					case 2:
   						printf("");
    					gets(debug);
						printf("Digite o novo nome:  ");
   						gets(nome);
   						printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
   					case 3:
   						printf("");
    					gets(debug);
						printf("Digite o novo CEP: ");
   						gets(CEP);
   						printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
   					case 4:
   						printf("");
    					gets(debug);
						printf("Digite o novo endere�o: ");
   						gets(endereco);
   						printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
   					case 5:
   						printf("");
    					gets(debug);
						printf("Digite o novo bairro: ");
   						gets(bairro);
   						printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
    				case 6:
    					printf("");
    					gets(debug);
						printf("Digite a nova cidade: ");
    					gets(cidade);
    					printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
    				case 7:
	    				printf("");
    					gets(debug);
						printf("Digite o novo estado: ");
    					gets(estado);
    					printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
    				case 8:
    					printf("");
    					gets(debug);
						printf("Digite o novo telefone: ");
    					gets(telefone);
    					printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
    				case 9:
    					printf("");
    					gets(debug);
						printf("Digite o novo e-mail: ");
    					gets(email);
   		 				printf("Altera��o concluida com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
    				default:
    					printf("Op��o inv�lida! Digite um n�mero de 1 a 9.");
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");	
				}
			}
			else
			{
				printf("C�digo de cliente inv�lido!");
				printf ("\n\n*-----Selecione o que deseja-----*\n");
				printf ("|  1- Cadastrar                  |\n");
				printf ("|  2- Consultar                  |\n");
				printf ("|  3- Alterar                    |\n");
				printf ("|  4- Excluir                    |\n");
				printf ("|  5- Sair                       |\n");
				printf ("*--------------------------------*\n\n");
				printf ("Op��o: ");
				scanf("%d", &terminar);
				op = terminar;
				system("cls");
			}
			break;
    	case 4:
    		printf("");
    		gets(debug);
			printf("Digite o c�digo do cliente a ser feita as exclus�es: ");
    		gets(codigoCAE);
    		
    		if (strncmp (codigo,codigoCAE,20) == 0)
			{
				printf("*-------O que deseja excluir-------*\n");
    			printf("|  1- C�digo do cliente            |\n");
    			printf("|  2- Nome                         |\n");
    			printf("|  3- CEP                          |\n");
    			printf("|  4- Endere�o                     |\n");
    			printf("|  5- Bairro                       |\n");
    			printf("|  6- Cidade                       |\n");
    			printf("|  7- Estado                       |\n");
    			printf("|  8- Telefone                     |\n");
    			printf("|  9- E-mail                       |\n");
    			printf("*-------====================-------*\n ");
    			printf("\nOp��o: ");
				scanf("%d", &exc);
    		
    			switch (exc)
    			{
    				case 1:
    					printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(codigo);
						printf("Item excluido com sucesso!\n");
    					
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
   					case 2:
   						printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(nome);
						printf("Item excluido com sucesso!\n");
    					
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
   					case 3:
   						printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(CEP);
						printf("Item excluido com sucesso!\n");
    					
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
   					case 4:
   						printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(endereco);
						printf("Item excluido com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
   					case 5:
   						printf("");
  	  					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(bairro);
						printf("Item excluido com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
	    			case 6:
   	 					printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(cidade);
						printf("Item excluido com sucesso!\n");
    					
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
    					break;
   		 			case 7:
    					printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
	    				gets(estado);
						printf("Item excluido com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
    				case 8:
    					printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(telefone);
						printf("Item excluido com sucesso!\n");
    				
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
    				case 9:
    					printf("");
    					gets(debug);
						printf("Digite 0 para confirmar a exclus�o: ");
    					gets(email);
						printf("Item excluido com sucesso!\n");
    					
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");
						break;
    				default:
    					printf("Op��o inv�lida! Digite um n�mero de 1 a 9.");
						printf ("\n\n*-----Selecione o que deseja-----*\n");
						printf ("|  1- Cadastrar                  |\n");
						printf ("|  2- Consultar                  |\n");
						printf ("|  3- Alterar                    |\n");
						printf ("|  4- Excluir                    |\n");
						printf ("|  5- Sair                       |\n");
						printf ("*--------------------------------*\n\n");
						printf ("Op��o: ");
						scanf("%d", &terminar);
						op = terminar;
						system("cls");	
				}
			}
			else
			{
				printf("C�digo de cliente inv�lido!");
				printf ("\n\n*-----Selecione o que deseja-----*\n");
				printf ("|  1- Cadastrar                  |\n");
				printf ("|  2- Consultar                  |\n");
				printf ("|  3- Alterar                    |\n");
				printf ("|  4- Excluir                    |\n");
				printf ("|  5- Sair                       |\n");
				printf ("*--------------------------------*\n\n");
				printf ("Op��o: ");
				scanf("%d", &terminar);
				op = terminar;
				system("cls");
			}
    		break;
    	default:
    		printf("Op��o inv�lida! Digite um n�mero de 1 a 5.");	
			printf ("\n\n*-----Selecione o que deseja-----*\n");
			printf ("|  1- Cadastrar                  |\n");
			printf ("|  2- Consultar                  |\n");
			printf ("|  3- Alterar                    |\n");
			printf ("|  4- Excluir                    |\n");
			printf ("|  5- Sair                       |\n");
			printf ("*--------------------------------*\n\n");
			printf ("Op��o: ");
			scanf("%d", &terminar);
			op = terminar;
			system("cls");
	}
	}
}