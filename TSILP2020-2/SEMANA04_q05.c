#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int lado1,lado2,lado3;
	printf("Informe as medidas do triangulo\n");
	scanf("%i%i%i",&lado1,&lado2,&lado3);
	
	if((lado1+lado2)<lado3 || (lado3+lado2)<lado1 || (lado3+lado1)<lado2){
	    printf("Nao forma um triangulo");
        }else{
		if(lado1==lado2 && lado3!=lado1 || lado1==lado3 && lado2!=lado3 || lado3==lado2 && lado1!=lado2){
		printf("triangulo isosceles");
	    }else{
	    	if(lado1==lado2 && lado2==lado3){
	    	printf("triangulo equilatero");
	    	}else{
	    		if(lado1!=lado2 && lado2!=lado3){
	    			printf("triangulo escaleno");
				}
	    		}
				}
			}
				return 0;
}