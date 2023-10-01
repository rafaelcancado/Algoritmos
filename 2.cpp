/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    float bas, alt, area;
    
    printf("Insira o tamanho da base do triângulo: ");
    scanf("%f", &bas);
    printf("Insira o tamanho da altura do triângulo: ");
    scanf("%f", &alt);
    
    area = (bas * alt) / 2;
    
    printf("A área do triângulo é %.2f cm", area);

return 0;
    
    
}


