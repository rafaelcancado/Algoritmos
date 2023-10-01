/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 
 #include <stdio.h>

const float PI = 3.14;

int main()
{
    float raio, vol;
    
    printf("Insira o raio da esfera a ser calculada: ");
    scanf("%f", &raio);
    
    vol = 1.3333 *PI * (raio * raio * raio);
    
    printf("O volume da esfera é %f cm³.", vol);
    

return 0;
    
    
}






