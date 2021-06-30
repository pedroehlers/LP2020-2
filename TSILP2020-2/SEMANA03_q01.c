#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n1,n2;
	scanf("%i%i",&n1,&n2);
	if(n1<n2){
		printf("%i %i %i %i %i %i",n1-1,n1,n1+1,n2-1,n2,n2+1);
	}else{
		printf("%i %i %i %i %i %i",n2-1,n2,n2+1,n1-1,n1,n1+1);
	}
	
	return 0;
}