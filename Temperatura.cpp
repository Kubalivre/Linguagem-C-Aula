#include <conio.h>
#include <stdio.h>
#include <math.h>

 main (){
char opcao;
float C,F,T;
puts("\n\nEscolha a temperatura em graus Celsius(C) ou Fahreheint(F) que ira' calcular:\n\n"); 
scanf("%c",&opcao); 
    printf("\n\t Entre com a temperatura: Pfvr seu Gostso :3\n\n");
	scanf("%f",&T);
if (opcao=='C')    
    { 
	 F=(9 * T + 160) / 5;
     printf("\n\t A Temperatura em Fahreheint e':%.2f",F);}    
     
else if(opcao=='F')
{
		  C=((T-32)*5)/9;
             printf("\n\t A Temperatura em Celsius e':%.2f",C); }      
    getch();
}

