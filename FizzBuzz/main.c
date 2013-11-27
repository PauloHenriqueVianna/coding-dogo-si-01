#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	for(i=1;i<=100;i++){
	   if (i%3==0 && i%5==0){
	   	  printf("FIZZBUZZ\n");
	   } else if(i%3==0){
	   	  printf("FIZZ\n");
	   } else if (i%5==0){
	   	  printf("BUZZ\n");
	   } else {
	   	  printf("%d\n", i);
	   }
	}

	return 0;
}
