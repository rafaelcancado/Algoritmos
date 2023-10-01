/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
  #include <stdio.h>
#include <math.h>


int
main ()
{

  int a, b, c, temp;

  printf ("Digite o valor de a: ");
  scanf ("%d", &a);
  printf ("Digite o valor de b: ");
  scanf ("%d", &b);
  printf ("Digite o valor de c: ");
  scanf ("%d", &c);

//Leia 3 variáveis inteiras a, b e c e faça um "rodízio" entre elas. Ao final, a variável b deverá ter o
//valor da variável a, a variável c deverá ter o valor da variável b e a variável a deverá ter o valor da
//variável c.

//a vira c, b vira a, c vira b

  temp = b;
  b = a;
  a = c;
  c = temp;
  

  printf ("O valor de a é %d, de b é %d e de c é %d.", a, b, c);





}














