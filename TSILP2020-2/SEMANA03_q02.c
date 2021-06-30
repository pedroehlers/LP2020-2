#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int ca,cb,cc;
	
	scanf("%i%i%i",&ca,&cb,&cc);
	
	if(ca>(cb+cc)){
		printf("Candidato A");
	}else if(cb>(ca+cc)){
		printf("Candidato B");
	}
	else if(cc>(ca+cb)){
		printf("Candidato C");
	}
	else{
	    printf("Segundo turno");
	}

  
	
	return 0;
}