#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ano=1;
	
	
	while (ano!=0){
	
	printf("Digite o ano a ser analisado, ou 0 para encerrar: ");
	scanf("%d", &ano);
	
	if (ano==0){
	}
	else if ((ano%4==0 && ano%100!=0) | (ano%400==0)) {
		printf("O ano %d, e bissexto !\n", ano);
	}
	else {
		printf("O ano %d, nao e bissexto!\n", ano);
	}
	}
	
	system ("pause");
	return 0;
}
