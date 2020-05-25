#include <stdio.h>
 
int main(){
    char msg_original[127];
    char msg_codificada[126];
    printf("Digite uma mensagem: ");
    scanf("%s", &msg_original);
   
	for (int i = 0; i < 127; i++){
        if(msg_original[i] == 0) break;
        msg_codificada[i] += (int)msg_original[i] + (i + 1);
    }
    printf("Mensagem codificada: %s", msg_codificada);
   
	scanf("%s", &msg_codificada);
    for (int i = 0; i < 127; i--){
        if(msg_original[i] == 0) break;
        msg_original[i] += (int)msg_codificada[i] - (i - 1);
    }
    printf(msg_original);
    return 0;
}
