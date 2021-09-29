#include <stdio.h>
#include <stdlib.h>

/*4. Leia um numero positivo do usuÃ¡rio, entÃ£o, calcule e imprima a sequÃªncia Fibonacci (Fn = Fn - 1 + Fn - 2) atÃ© o primeiro nÃºmero
superior ao nÃºmero lido. Exemplo: se o usuÃ¡rio informou o nÃºmero 30, a sequencia a ser impressa serÃ¡: 0 1 1 2 3 5 8 13
21 34. */
int main(){
	int n=0, i=0;
	printf("Digite um numero! \n");
	scanf("%d", &n);
 	while (i<=n){
		 if(i==0){
			printf("0 \n");
		 }else if(i==1){
			printf("1\n");
		 }
         else{
			 printf("%d \n", (i-1) + (i-2)); //desespero
			 i = (i-1) + (i-2); //desespero
		 } 
	} 
	return 0;
}
