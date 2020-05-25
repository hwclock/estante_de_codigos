#include <stdio.h>
#include <string.h>

char * troca_letra(char *str, char letravelha, char letranova);

int main(){
	char string[100]; // variavel que guarda a frase
	char letra_velha; // variavel que guarda a letra velha
	char letra_nova; // varaivel que guarda a letra nova
	
	memset(string, '\0', 100); // limpa o espaço da variavel string
	
	printf("Digite uma frase qualquer: \n");
	fgets(string, 99, stdin); // pega do usuario uma frase
	
	printf("Digite a letra a ser trocada: \n");
	letra_velha = getchar(); getchar(); // pega do usuario a letra que sera substituida
	
	printf("Digite a letra para substituir a letra velha: \n");
	letra_nova = getchar(); getchar(); // pega do usuario a letra nova
	
	printf("Aqui esta a sua frase com as letras trocadas: %s", troca_letra(string, letra_velha, letra_nova));
	return 0;
}

char * troca_letra(char *str, char letravelha, char letranova){
	char *inicio = str; // guarda o endereço de inicio da frase
	
	while(*str != '\0'){ // inicia o laço para percorrer toda a string
		if(*str == letravelha){ // verifica se a letra nesta posição é igual a letra velha
			*str = letranova; // se for igual a letra velha substitui pela letra nova
		}
		str++; // avança um endereço de memoria
	}
	return (inicio); // retorna o endereço de inicio da string
}
