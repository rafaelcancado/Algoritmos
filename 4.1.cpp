/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{
    float p1, p2, media;
    
    printf("Digite a nota da p1 e p2 \n");
    scanf("%f %f", &p1, &p2);
    
    media = (p1 + p2) / 2;
    
    if(media < 7){
        
        printf("Reprovado");
    }
    
    else {
        
        printf("Aprovado");
    }

    return 0;
}
