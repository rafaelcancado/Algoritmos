/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int ano, proximoBissexto;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
        
        proximoBissexto = ano;
        while (!((proximoBissexto % 4 == 0 && proximoBissexto % 100 != 0) || (proximoBissexto % 400 == 0))) {
            proximoBissexto++;
        }
        printf("O próximo ano bissexto é: %d\n", proximoBissexto);
    }

    return 0;
}

















