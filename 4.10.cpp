/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("É um triângulo equilátero.\n");
        } else if (x == y || x == z || y == z) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Não é um triângulo válido.\n");
    }

    return 0;
}

