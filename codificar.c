#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
        char msg_codificada[strlen(argv[1])];
        for(int i = 0; i < strlen(argv[1]); i++){
               char msg[strlen(argv[1])];
               strncpy(msg, argv[1], strlen(argv[1]));
               msg_codificada[i] = msg[i] + 3;
       }
       printf("Mensagem codificada: %s\n", msg_codificada);
       return 0;
}
