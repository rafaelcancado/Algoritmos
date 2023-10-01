/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <stdio.h>

int main()
{
    float n1,n2, n3, media;
    int p1, p2, p3;
    
    
   printf("Digite a nota N°1: ");
   scanf("%f", &n1);
   printf("Digite o peso da nota N°1: ");
   scanf("%d", &p1);
   printf("Digite a nota N°2: ");
   scanf("%f", &n2);
   printf("Digite o peso da nota N°2:");
   scanf("%d", &p2);
   printf("Digite a nota N°3: ");
   scanf("%f", &n3);
   printf("Digite o peso da nota N°3:");
   scanf("%d", &p3);
   
   media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3) ;
   
   printf("Sua média é %f", media);
   
   return 0;
   
}










