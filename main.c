#include <stdio.h>

int loop(int n){
  return loop (n + 1);
}

int fat(int n){
  if (n < 0)
    return 0;
  if(n == 0)
    return 1;

  int res = 1;
 
  int i= 1;
  for(int i = 1; i <= n; i++){
    res = res * i;
  }
  return res;
}

int fat_recursivo(int n){
  if(n < 0) return 0; // criterio de parada
  if(n ==0) return 1; // criterio de parada
  return fat(n-1) * n; //passo recursivo
}

int PA(int n){
  if(n < 1) return 0;
  if(n == 1) return 1;
  if(n > 1)
  return PA(n -1) + 2;
  
}

int PG(int n){
if(n < 1) return 0;
  if(n == 1) return 2;
  if(n > 1)
  return PG(n - 1) * (-3);
  }

  int Fib(int n){
if(n < 1) return 0;
if(n == 1)return 1;
    if(n > 1)
      return((Fib(n-1) + Fib(n - 2))); 
  }

  


int main(void) {

  int i;
  printf("Digite um número:\n");
  scanf("%d" , &i);
 
printf("fatorial de %d: %d\n", i , fat(i));
  printf("fatorial de %d: %d\n", i , fat_recursivo(i));
  printf("PA de %d : %d\n" , i, PA(i));
   printf("PG de %d : %d\n" , i, PG(i));
  printf("Fibonate de %d : %d\n" , i, Fib(i));

  
  return 0;
}