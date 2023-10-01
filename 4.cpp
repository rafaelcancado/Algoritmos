/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    float prod, desc, vlr, prcdc;
    
    printf("Insira o valor do produto: ");
    scanf("%f", &prod);
    printf("Insira o percentual de desconto: ");
    scanf("%f", &desc);
    
    prcdc = prod * (desc / 100 + 1);
    vlr = prod * (desc / 100);
    
    printf("O valor novo do produto é R$ %.2f. O valor descontado foi R$ %.2f.", prcdc, vlr);

return 0;
    
    
}



