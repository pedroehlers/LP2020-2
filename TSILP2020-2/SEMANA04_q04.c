#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int d,m,a,fp;
	scanf("%i%i%i%i",&d,&m,&a,&fp);
    
	switch (fp) {
    case 1:
       if(d<31 && m<4 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 2:
       if(d<31 && m<4 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 3:
       if(d<31 && m<4 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
    case 4:
       if(d<21 && m<6 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 5:
       if(d<21 && m<6 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 6:
       if(d<21 && m<6 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 7:
       if(d<31 && m<7 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 8:
       if(d<31 && m<7 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 9:
       if(d<32 && m<8 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
	case 0:
       if(d<32 && m<8 && a<2022){
       	printf("No prazo");
	   }else{
	   	printf("Atrasado");
	   }break;
 }
    
	return 0;
}