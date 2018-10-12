#include <conio.h>
#include <stdio.h>
#include <math.h>

int main (){
float Ac,R,At,B,b,H;
int opcao;
puts("\n\t********Area Circunferencia ou Trapezio********\n\n");  
printf("\n\t Escolha (1) para Circunferencia, (2) para Trapezio\n\n");
scanf("%i",&opcao);
     
if (opcao==1)    
    {
    printf("\n\t Entre com o valor do Raio:\n\n");
    scanf("%f",&R);                  
	Ac = M_PI*(pow(R,2));
    printf("\n\t A area do circulo e': %.2f", Ac);
    }    
     
else if(opcao==2)
    {
    printf("\n\t Entre com o valor da Base Maior:\n\n");
    scanf("%f",&B);
    printf("\n\t Entre com o valor da Base Menor:\n\n");
    scanf("%f",&b);
    printf("\n\t Entre com o valor da Altura:\n\n");
    scanf("%f",&H);
	At = (B + b) * H;
    printf("\n\tA area do trapezio e: %.2f", At); 
    }
          
else
    {
    printf("Seu animal e pra escolher 1 ou 2 !!!");
    }
    getch();
}


