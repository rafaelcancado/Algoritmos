/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, root1, root2;

    printf("Digite a: ");
    scanf("%f", &a);
    printf("Digite b: ");
    scanf("%f", &b);
    printf("Digite c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (a == 0 || delta < 0) {
        printf("o coeficiente a deve ser diferente de zero e delta deve ser positivo");
    } else {
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1: %.2f\n", root1);
        printf("Raiz 2: %.2f\n", root2);
    }

    return 0;
}

















