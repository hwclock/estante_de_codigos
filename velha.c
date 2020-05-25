#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// variaveis globais para as posições do tabuleiro
char esp1, esp2, esp3, esp4, esp5, esp6, esp7, esp8, esp9;
char *pntP1 = &esp1; char *pntP2 = &esp2; char *pntP3 = &esp3;
char *pntP4 = &esp4; char *pntP5 = &esp5; char *pntP6 = &esp6;
char *pntP7 = &esp7; char *pntP8 = &esp8; char *pntP9 = &esp9;

void atualizar_tabuleiro(){
	system("clear");
	printf("   %c | %c | %c \n", *pntP1, *pntP2, *pntP3);
	printf("  -----------\n");
	printf("   %c | %c | %c \n", *pntP4, *pntP5, *pntP6);
	printf("  -----------\n");
	printf("   %c | %c | %c \n",*pntP7, *pntP8, *pntP9);
}

int verificar_ganhador(){
		
		if(*pntP1 == *pntP2 && *pntP2 == *pntP3 && *pntP1 == 'X'){
			return 1;
		}
		else if(*pntP1 == *pntP4 && *pntP4 == *pntP7 && *pntP1 == 'X'){
			return 1;
		}
		else if(*pntP3 == *pntP6 && *pntP6 == *pntP9 && *pntP3 == 'X'){
			return 1;
		}
		else if(*pntP2 == *pntP5 && *pntP5 == *pntP8 && *pntP2 == 'X'){
			return 1;
		}
		else if(*pntP4 == *pntP5 && *pntP5 == *pntP6 && *pntP4 == 'X'){
			return 1;
		}
		else if(*pntP7 == *pntP8 && *pntP8 == *pntP9 && *pntP7 == 'X'){
			return 1;
		}
		else if(*pntP1 == *pntP5 && *pntP5 == *pntP9 && *pntP1 == 'X'){
			return 1;
		}
		else if(*pntP3 == *pntP5 && *pntP5 == *pntP7 && *pntP3 == 'X'){
			return 1;
		}
		else if(*pntP1 == *pntP2 && *pntP2 == *pntP3 && *pntP1 == 'O'){
			return 2;
		}
		else if(*pntP1 == *pntP4 && *pntP4 == *pntP7 && *pntP1 == 'O'){
			return 2;
		}
		else if(*pntP3 == *pntP6 && *pntP6 == *pntP9 && *pntP3 == 'O'){
			return 2;
		}
		else if(*pntP2 == *pntP5 && *pntP5 == *pntP8 && *pntP2 == 'O'){
			return 2;
		}
		else if(*pntP4 == *pntP5 && *pntP5 == *pntP6 && *pntP4 == 'O'){
			return 2;
		}
		else if(*pntP7 == *pntP8 && *pntP8 == *pntP9 && *pntP7 == 'O'){
			return 2;
		}
		else if(*pntP1 == *pntP5 && *pntP5 == *pntP9 && *pntP1 == 'O'){
			return 2;
		}
		else if(*pntP3 == *pntP5 && *pntP5 == *pntP7 && *pntP3 == 'O'){
			return 2;
		}
		else{
			return 0;
		}
}

int main(){
	system("clear");
	
	*pntP1 = '1'; *pntP2 = '2'; *pntP3 = '3';
	*pntP4 = '4'; *pntP5 = '5'; *pntP6 = '6';
	*pntP7 = '7'; *pntP8 = '8'; *pntP9 = '9';
	
	int posicao, ganhador = 0;
	char jogador1[20];
	memset(jogador1, '\0', 19);

	char jogador2[20];
	memset(jogador2, '\0', 19);

	printf(" BEM VINDO AO JOGO DA VELHA \n\n");
	printf("Digite o nome do jogador 1: ");
	fgets(jogador1, 19, stdin); printf("\n");
	printf("Digite o nome do jogador 2: ");
	fgets(jogador2, 19, stdin); printf("\n");
	
	printf("Bem vindos! %s e %s\n", jogador1, jogador2);
	printf(" Vamos começar:\n %s  fica com o X\n %s  fica com a O\n", jogador1, jogador2);
	
	printf("Pressione uma tecla para continuar: \n");
	getchar();
	
	system("clear");
	
	for(int i = 2; i <= 11; i++){
		int vezdquem = i % 2;
		
		ganhador = verificar_ganhador();
		if(ganhador == 0){
			if(i == 11){
				printf("Deu velha!\n");
				break;
			}
		}
		else if(ganhador == 1){
			printf("O ganhador é:\n %s", jogador1);
			break;
		}
		else if(ganhador == 2){
			printf("O ganhador é:\n %s", jogador2);
		}
		
		if(vezdquem == 0){
		    atualizar_tabuleiro();
		    printf("  Escolha uma posição %s: \n", jogador1);
		    scanf("  %d", &posicao);
		    
		    switch(posicao){
				
				case 1:
					if(*pntP1 == 'O' || *pntP1 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP1 = 'X';
					break;
				
				case 2:
					if(*pntP2 == 'O' || *pntP2 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP2 = 'X';
					break;
				
				case 3:
					if(*pntP3 == 'O' || *pntP3 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP3 = 'X';
					break;
					
				case 4:
					if(*pntP4 == 'O' || *pntP4 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP4 = 'X';
					break;
					
				case 5:
					if(*pntP5 == 'O' || *pntP5 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP5 = 'X';
					break;
					
				case 6:
					if(*pntP6 == 'O' || *pntP6 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP6 = 'X';
					break;
					
				case 7:
					if(*pntP7 == 'O' || *pntP7 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP7 = 'X';
					break;
					
				case 8:
					if(*pntP8 == 'O' || *pntP8 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP8 = 'X';
					break;
					
				case 9:
					if(*pntP9 == 'O' || *pntP9 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP9 = 'X';
					break;	
					
				default:
					printf("Digite um opção válida!");
					i--;
			}
			
			atualizar_tabuleiro();		
		}
		else if(vezdquem == 1){
		    atualizar_tabuleiro();
		    printf("Escolha uma posição %s: \n", jogador2);
		    scanf("%d", &posicao);
		    
		    switch(posicao){
				
				case 1:
					if(*pntP1 == 'O' || *pntP1 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP1 = 'O';
					break;
				
				case 2:
					if(*pntP2 == 'O' || *pntP2 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP2 = 'O';
					break;
				
				case 3:
					if(*pntP3 == 'O' || *pntP3 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP3 = 'O';
					break;
					
				case 4:
					if(*pntP4 == 'O' || *pntP4 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP4 = 'O';
					break;
					
				case 5:
					if(*pntP5 == 'O' || *pntP5 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP5 = 'O';
					break;
					
				case 6:
					if(*pntP6 == 'O' || *pntP6 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP6 = 'O';
					break;
					
				case 7:
					if(*pntP7 == 'O' || *pntP7 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP7 = 'O';
					break;
					
				case 8:
					if(*pntP8 == 'O' || *pntP8 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP8 = 'O';
					break;
					
				case 9:
					if(*pntP9 == 'O' || *pntP9 == 'X'){
						printf("Está posição ja esta ocupada!");
						i--;
						break;
					}
					*pntP9 = 'O';
					break;	
					
				default:
					printf("Digite um opção válida!");
					i--;
			}
			
			atualizar_tabuleiro();		
		}
	}
	return 0;
}
