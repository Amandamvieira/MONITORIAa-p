#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void bigger_random()
{
  int nums[3], maior;

  srand(time(NULL));
  for (int i = 0; i < 3; i++){
    nums[i] = rand()%101;
    printf("%d° numero aleatorio %d\n", i+1, nums[i]);
  }
  if(nums[0]>nums[1])
    maior = nums[0]>nums[2] ? nums[0] : nums[2];
  else
    maior = nums[1]>nums[2] ? nums[1] : nums[2];

  printf("Maior é o numero %d\n", maior);
}

void bhaskara() 
{
  float a, b, c, x1, x2, delta;
  printf ("Digite o valor de 'a': ");
  scanf("%f", &a);
  printf ("Digite o valor de 'b': ");
  scanf("%f", &b);
  printf ("Digite o valor de 'c': ");
  scanf("%f", &c);
  
  delta = (b*b)-(4*a*c);
  if(delta < 0) 
  {
    printf("A equacao nao possui raizes reais!!\n");
    return;
  } 

  x1 = (b - sqrt(delta))/(2*a);
  x2 = (b + sqrt(delta))/(2*a);
  
  printf("x1 = %.2f\n", x1);
  printf("x2 = %.2f", x2);
}

int main(int argc, char const *argv[])
{
  int jogando = 1;
  while(jogando){
    int opcao;
    printf ("=========================\n");
    printf ("1 - Numeros Aleatorios\n");
    printf ("2 - Baskhara\n");
    printf ("3 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
      case 1 :
      bigger_random();
      break;
      
      case 2 :
      bhaskara();
      break;
      
      case 3 :
      printf ("Bye!!\n");
      return 0;
      
      default :
      printf ("Valor invalido! Digite novamente um valor valido\n");
    }
  } 
}
