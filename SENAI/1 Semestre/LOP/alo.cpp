#include <stdio.h>
void main(){
     //Variaves 
     int a, b, c;
      //Entrada
      printf("Digite um número inteiro");
      scanf("%d",&a);
      printf("Digite outro número inteiro");
      scanf("%d",&b);
      //Processamento
      c = a + b;
      //Saida 
      printf("A soma dos dois números é %d",c);
      getch();
  }