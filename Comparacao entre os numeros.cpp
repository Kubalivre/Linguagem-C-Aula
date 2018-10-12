#include <conio.h>
#include <stdio.h>
#include <math.h>

int main (){
float A,B;
puts("\n\t********Algoritmo para comparar dois números********\n\n");  
    printf("\n\t Digite o Primeiro Numero: \n\n");
	scanf("%f",&A);
	
	printf("\n\t Digite o Segundo Numero: \n\n");
	scanf("%f",&B);
	
if (A > B)    
    { 
	printf("A > B");
	}
     
else if(B > A)
	{
	printf("B > A");
	}
		
	else
	{
	printf("A = B");
    }
    getch();
}
