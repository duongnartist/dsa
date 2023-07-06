#include <stdio.h>  // for using input output handler
#include <stdlib.h> // for using dynamic memory handler

void print_array(int *arr, int size) {
  printf("\nDisplay array\n");
  for (int i = 0; i < size; i++) {
    printf("  - a[%d] = %d\n", i, *(arr + i));
  }
}

int main(int argc, char const *argv[]) {
  printf("Please enter number: ");
  int n;
  scanf("%d", &n);
  int *a = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    printf("  - enter [%d]: ", i);
    scanf("%d", &a[i]);
  }
  print_array(a, n);
  return 0;
}
