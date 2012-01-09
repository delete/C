#include <stdlib.h>
#include <stdio.h>

main() {
char op;
int opt;
	while (opt != 1){
		system("clear");
		printf("    Bem vindo ao ClearCache para linux, execute esse programa como root!!\n");
		printf("Escolha uma opção: \n");
		printf("[1] Limpar memoria cache.\n");
		printf("[0] Sair\n");
		printf("Opção: ");	
		op=getchar();

		switch(op) {

			case '1' :
				system("echo 3 > /proc/sys/vm/drop_caches");
				printf("\n\nCache limpa!!\n\n");
				break;
			case '0':
				system("clear");
				printf("Bye!\n\n");
				opt = 1; 
				break;
			default :
				system("clear");
				printf("\nOpção errada!\n\n\n\n");
				system("sleep 1");
				break;
			}

		}
}
