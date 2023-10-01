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

  float x, resto;
  int intx;
  
  printf("Insira um número real: ");
  scanf("%f", &x);
  
  intx = x;
  resto = x - intx;
  
  
  if(resto >= 0.5) {
      
    x = x + resto;
    x = (int) x;
  printf("x é igual a %f", x);
  
}

else {
    printf("x é igual a %d", intx);
}


}















