/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <stdio.h>


int main()
{
    int byt; 
    float qtds, vel;
    
    printf("Qual é o tamanho do arquivo em bytes? ");
    scanf("%d", &byt);
    printf("Qual é a velocidade de download em bytes por segundo? ");
    scanf("%f", &vel);
    
    qtds = byt / vel;
    
    printf("Serão necessários %.2f segundos para terminar o download.", qtds);

return 0;
    
    
}




