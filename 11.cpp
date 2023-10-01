/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float comp, larg, preco, area, pgram;
    
    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comp);
    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &larg);
    printf("Quanto está o preço do metro de grama? ");
    scanf("%f", &preco);
    
    area = comp * larg;
    pgram = area * preco;
    
    printf("A área do terreno é %.2f m², e o valor a ser pago pela grama é R$ %.2f", area, pgram);
    
   
   return 0;
   
}











