#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <locale.h>

#define PI 3.1415926536

int main() 
{
	
setlocale(LC_ALL, "spanish");

int seleccion; 
float x, s, a, c, t, ch, sh, th, si, ci, ti, rad; 

printf("Calculadora: Seno, Coseno y Tangente \n"); 
printf("Selecciona una opcion\n\n");
printf("Seno = 1\n");
printf("Coseno = 2\n");
printf("Tangente = 3\n\n");
printf("Seno hiperb�lico = 4\n");
printf("Coseno hiperb�lico = 5\n");
printf("Tangente hiperb�lico = 6\n\n");
printf("Seno inverso = 7\n");
printf("Coseno inverso = 8\n");
printf("Tangente inversa = 9\n");
printf("------------------\nSeleccion: ");
scanf("%d",&seleccion);
printf("\n\nIngresa un n�mero en grados:");
scanf("%f",&x); 
rad = x*PI/180; 

switch(seleccion) 
{
case 1: 
s=sin(rad);
printf("El Seno de %.0f",x);
printf(" es: %.8f", s); 
getch();
break;

case 2: 
c=cos(rad);
printf("El Coseno de %.0f",x);
printf(" es: %.8f", c); 
getch();
break;

case 3: 
t=tan(rad);
printf("El Tangente de %.0f",x);
printf(" es: %.8f", t); 
getch();
break;

case 4: 
sh=sinh(rad);
printf("El Seno hiperb�lico de %.0f",x);
printf(" es: %.8f", sh); 
getch();
break;

case 5: 
ch=cosh(rad);
printf("El Coseno hiperb�lico de %.0f",x);
printf(" es: %.8f", ch); 
getch();
break;

case 6: 
th=tanh(rad);
printf("La Tangente hiperb�lica de %.0f",x);
printf(" es: %.8f", th); 
getch();
break;

case 7: 
si=asin(rad);
printf("El Seno inverso de %.0f",x);
printf(" es: %.8f", si); 
getch();
break;

case 8: 
ci=acos(rad);
printf("El Coseno inverso de %.0f",x);
printf(" es: %.8f", ci); 
getch();
break;

case 9: 
ti=atan(rad);
printf("La Tangente inversa de %.0f",x);
printf(" es: %.8f", ti); 
getch();
break;

default:
printf( "Por favor, elija una opci�n del men�...\n" );
getch();
}
return 0;
} 
