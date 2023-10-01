/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
   #include <stdio.h>

int main()
{
    int PA, a, n, r, an;
    
    printf("Insira o primeiro termo (a): ");
    scanf("%d", &a);
    printf("Insira a posição do termo geral: ");
    scanf("%d", &n);
    printf("Insira a razão da PA: ");
    scanf("%d", &r);
    
    PA = a + (n - 1) * r;
    
    printf("%d", PA);

    return 0;
}

 #include <stdio.h>
#include <math.h>
int
main ()
{

  float a, b, x;

  printf ("Digite o valor de a: ");
  scanf ("%f", &a);
  printf ("Digite o valor de b: ");
  scanf ("%f", &b);

  x = -b / a;

  printf ("O valor de x é %.2f", x);





}













