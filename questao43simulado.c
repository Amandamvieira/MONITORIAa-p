#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int n = 0;
  printf ("========================================\n");
  printf ("Digite a quantidade de numeros da serie:");
  scanf("%d", &n);
  
  int serie[n];
  printf("Serie de %d numeros:\n", n);
  for(int i = 0; i <= n-1; i++){
    serie[i] = i<2 ? i: serie[i-1]+serie[i-2]; 
    printf("%d ", serie[i]);
  }
  return 0;
}
