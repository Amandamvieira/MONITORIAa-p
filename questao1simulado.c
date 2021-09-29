#include <stdio.h>

int main(int argc, char const *argv[])
{
  int divisor = 1;
  int divisores = 0;
  int numero;
  
  printf ("Digite um numero: ");
  scanf ("%d",&numero);
  
  while(divisor != numero){
  
    if (numero%divisor == 0)
      divisores += divisor;
    
    divisor++;
  }
  
  if (divisores == numero)
    printf("O %d é um numero perfeito!", numero);
  else if (divisores < numero)
    printf("O %d é um numero deficiente!", numero);
  else
    printf("O %d é um numero abundate!", numero);

  return 0;
}
