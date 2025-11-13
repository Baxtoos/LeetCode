#include <stdio.h>
// #include <time.h>

// int numeros_aleatorios() {
//   int A[100], i;
//   srand(time(NULL));

//   for (int i = 0; i < 100; i++) {
//     int numero_aleatorio_completo = rand();
//     A[i] = numero_aleatorio_completo;
//   }
//   printf("%d", A);
// }

int main() {
  double A[100];
  int i;

  for (i = 0; i < 100; i++) {
    scanf("%lf", &A[i]);
  }

  for (i = 0; i < 100; i++) {

    if (A[i] <= 10.0) {
      printf("A[%d] = %.1lf\n", i, A[i]);
    }
  }
  
  return 0;
}