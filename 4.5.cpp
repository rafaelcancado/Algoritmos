/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b;
    float divi;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro (b): ");
    scanf("%d", &b);

    
    if (b == 0) {
        printf("impossivel dividir");
    } 
        
        else {
            printf("%f", (float)a / b);
        }
        
     

    return 0;
}
