/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int x, y;

    printf("Digite o primeiro valor inteiro (x): ");
    scanf("%d", &x);
    printf("Digite o segundo valor inteiro (y): ");
    scanf("%d", &y);

    if (x % y == 0) {
        printf("%d é divisor de %d.\n", y, x);
    } else if (y % x == 0) {
        printf("%d é divisor de %d.\n", x, y);
    } else {
        printf("%d não divide %d, nem %d divide %d.\n", x, y, y, x);
    }

    return 0;
}
