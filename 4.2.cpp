/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro valor inteiro (a): ");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro (b): ");
    scanf("%d", &b);

    if (a < b) {
        printf("Menor valor: %d\n", a);
        printf("Maior valor: %d\n", b);
    } else {
        printf("Menor valor: %d\n", b);
        printf("Maior valor: %d\n", a);
    }

    return 0;
}
