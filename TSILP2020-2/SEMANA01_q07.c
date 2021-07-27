#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int saque;
	int n100,n50,n20,n10,n5,n2,n1;
	int r100,r50,r20,r10,r5,r2,r1;
	
	printf("Informe o valor do saque\n");
	scanf("%i",&saque);
	
	n100 = saque/100;
	r100 = saque%100;
	
	n50 = r100/50;
	r50 = r100%50;
	
	n20 = r50/20;
	r20 = r50%20;
	
	n10 = r20/10;
	r10 = r20%10;
	
	n5 = r10/5;
	r5 = r10%5;
	
	n2 = r5/2;
	r2 = r5%2;
	
	n1 = r2/1;
	r1 = r2%1;
	
	printf("%i cedulas de R$100\n",n100);
	printf("%i cedulas de R$50\n",n50);
	printf("%i cedulas de R$20\n",n20);
	printf("%i cedulas de R$10\n",n10);
	printf("%i cedulas de R$5\n",n5);
	printf("%i cedulas de R$2\n",n2);
	printf("%i cedulas de R$1\n",n1);
	
	
   return 0;
}