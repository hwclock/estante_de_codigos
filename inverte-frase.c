#include <stdio.h>
#include <string.h>

char * inverter(char *string){ // função para inverter string
	int tam = strlen(string); // variavel equivalente ao tamanho da string
	int contador = 0; 
	
	while(contador <= tam){ // laço para ir até a ultima posição da string
		string++;
		contador++;
	} // fim do while
	tam++; // uma pequena gambiarra
	for(int i = 0; i <= tam; i++){ // laço para printar cada letra
		printf("%c", *string);     // começando da ultima posição
		string--;
	} // fim do for
} // fim da função inverter()

int main(){
	char frase[100]; // variavel que vai guardar a frase do usuario
	memset(frase, '\0', 100); // limpar o lixo da memoria
	
	printf("Digite uma frase: \n");
	fgets(frase, 99, stdin); // pega a frase do usuario
	
	printf("Aqui esta sua frase invertida:\n");
	inverter(frase); // chama a função que inverte
	
	return 0;
} // fim do main
