/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    float lcubo, vcubo;

printf("Insira o lado do cubo a ser calculado, em centímetros: ");
scanf("%f", &lcubo);

vcubo = lcubo * lcubo * lcubo;

printf("O volume desse cubo é %.2f cm³.", vcubo);

return 0;
    
    
}

