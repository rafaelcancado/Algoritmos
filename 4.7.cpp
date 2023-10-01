/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, inferior, superior;

    printf("Digite um valor inteiro (n): ");
    scanf("%d", &n);
    printf("Digite o valor inferior do intervalo: ");
    scanf("%d", &inferior);
    printf("Digite o valor superior do intervalo: ");
    scanf("%d", &superior);

    if (n < inferior) {
        printf("%d está antes do intervalo [%d, %d].\n", n, inferior, superior);
    } else if (n >= inferior && n <= superior) {
        printf("%d está dentro do intervalo [%d, %d].\n", n, inferior, superior);
    } else {
        printf("%d está fora do intervalo [%d, %d].\n", n, inferior, superior);
    }

    return 0;
}
