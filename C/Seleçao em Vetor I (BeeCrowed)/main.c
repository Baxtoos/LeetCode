#include <stdio.h>
#include <time.h>

int numeros_aleatorios() {
  int A[100], i;
  srand(time(NULL));

  for (int i = 0; i < 100; i++) {
    int numero_aleatorio_completo = rand();
    A[i] = numero_aleatorio_completo;
  }
  printf("%d", A);
}

int main() {
  numeros_aleatorios();
}