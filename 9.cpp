/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 
#include <stdio.h>

const float PI = 3.14;

int main()
{
   float raio, alt, vol;
   
   printf("Digite o raio do cilindro: ");
   scanf("%f", &raio);
   printf("Digite a altura do cilindro: ");
   scanf("%f", &alt);

   vol = PI * (raio * raio) * alt;
   
   printf("O volume do cilindro é %.2f.", vol);
   
}









