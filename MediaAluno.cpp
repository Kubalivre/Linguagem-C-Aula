#include <conio.h>
#include <stdio.h>
#include <math.h>

int main (){
float NP1,NP2,Media;
char Nome;
puts("\n\n********Media Aluno******** \n\n");  
    printf("\n\t Entre com o Nome do Aluno:\n\n");
	scanf("%s",&Nome);
	
	printf("\n\t Entre com a Nota NP1 do Aluno:\n\n");
	scanf("%f",&NP1);
	
	printf("\n\t Entre com a Nota NP2 do Aluno:\n\n");
	scanf("%f",&NP2);
	
	Media=(NP1+NP2)/2;
	
if (Media>=7)    
    { 
	printf("O aluno esta' aprovado!");
	}
     
else if((Media>=5) && (Media<7))
	{
	printf("O Aluno fara' exame!");
	}
		
	else
	{
	printf("O Aluno esta' reprovado!");
    }
    getch();
}


