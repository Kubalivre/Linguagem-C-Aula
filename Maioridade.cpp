#include <conio.h>
#include <stdio.h>

 main (){
char Nome;
int Idade;
puts("\n\n********Algoritmo para Verificar a Maioridade********\n\n"); 
printf("\n\t Entre com o seu nome:\n\n");
	scanf("%s",&Nome); 
    printf("\n\t Entre com a sua idade: Pfvr seu Gostso(a) :3\n\n");
	scanf("%i",&Idade);
	
if (Idade>=18)    
    { 
	printf("\n\t Maior de Idade! ");
	}    
     
else if(Idade<18)
	{
    printf("\n\t Menor de Idade! ");      
	}
	getch();
}
   
