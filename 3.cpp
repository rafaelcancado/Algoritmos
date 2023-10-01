/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    float alt, kg, imc;
    
    printf("Insira a sua altura em metros: ");
    scanf("%f", &alt);
    printf("Insira seu peso em quilos: ");
    scanf("%f", &kg);
    
    imc = kg / (alt * alt);
    
    printf("Seu IMC é %.2f.", imc);

return 0;
    
    
}



