/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
  #include <stdio.h>

int main()
{
    float comp, larg, preco, area, param;
    
    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comp);
    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &larg);
    printf("Quanto está o preço do metro do arame farpado? ");
    scanf("%f", &preco);
    
    area = ((comp * 2) + (larg * 2)) * 4;
    param = (area * preco);
    
    printf("A quantidade de arame a ser usado é %.2f m, e o valor a ser pago pelo arame é R$ %.2f", area, param);
    
   
   return 0;
   
}












