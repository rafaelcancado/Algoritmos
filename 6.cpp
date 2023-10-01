/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <stdio.h>


int main()
{
    float cel, fah;
    
    printf("Insira a temperatura em °C: ");
    scanf("%f", &cel);
    
    fah = 32 + (1.8 * cel);
    
    printf("A temperatura informada equivale a %f °F", fah);

return 0;
    
    
}





