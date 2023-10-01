/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    int x, y, z, tipoTriangulo;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);

    if (x + y > z && x + z > y && y + z > x) {
    
    tipoTriangulo = (x == y) + (y == z) + (x == z);

        switch (tipoTriangulo) {
            case 0:
                printf("É um triângulo escaleno.\n");
                break;
            case 1:
                printf("É um triângulo isósceles.\n");
                break;
            case 3:
                printf("É um triângulo equilátero.\n");
                break;
        }
    } else {
        printf("Não é um triângulo válido.\n");
    }

    return 0;
}

