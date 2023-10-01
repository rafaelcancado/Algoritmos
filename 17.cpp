/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, n1, n2, n3;
    
    printf("Digite um número inteiro de 100 a 999.");
    scanf("%d", &n);
    
    if(n < 100 || n > 999) {
        
        printf("Número inválido");
    }

  n1 = n / 100;
  n2 = (n / 100);
  
  printf("%d", n2);

    return 0;
}
















