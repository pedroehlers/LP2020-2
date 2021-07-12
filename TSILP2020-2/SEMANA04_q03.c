#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n1,n2;
	printf("Informe dois numeros inteiros\n");
	scanf("%i%i",&n1,&n2);
	
	if(n1>n2 && n1-n2==2){
		printf("%i%i%i%i%i",n2-1,n2,n1-1,n1,n1+1);
	}else{
		if(n2>n1 && n2-n1==2){
			printf("%i%i%i%i%i",n1-1,n1,n2-1,n2,n2+1);
		}else{
	
	if(n1>n2 && n1-n2==1){
		printf("%i%i%i%i",n2-1,n1-1,n2+1,n1+1);
	}else{
		if(n2>n1 && n2-n1==1){
			printf("%i%i%i%i",n1-1,n2-1,n1+1,n2+1);
		}else{
			printf("%i%i%i%i%i%i",n1-1,n1,n1+1,n2-1,n2,n2+1);
		}
		}
	}
}


	return 0;
	}
