/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, dia, mes, ano;

    printf("Digite um número de 8 dígitos: ");
    scanf("%d", &n);

    
    dia = n / 1000000;      
    mes = (n / 10000) % 100; 
    ano = n % 10000;        

    printf("%02d/%02d/%04d\n", dia, mes, ano);

    return 0;
}















