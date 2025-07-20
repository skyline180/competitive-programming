//Created by chatGPT
/*
#include <stdio.h>

void intToArray(int num, int *array) {
  int i = 0;
  while (num > 0) {
    array[i] = num % 10;
    num /= 10;
    i++;
  }
}

int main() {
  int num = 12345;
  int array[5];

  intToArray(num, array);

  printf("The array representation of %d is: [", num);
  for (int i = 0; i < 5; i++) {
    printf("%d", array[i]);
    if (i < 4) {
      printf(", ");
    }
  }
  printf("]\n");

  return 0;
}
*/
#include <stdio.h>

void intToArray(int num, int *array) {
  int i = 0;
  while (num > 0) {
    array[i] = num % 10;
    num /= 10;
    i++;
  }
}

int main() {
  int num = 12345;
  int array[5];

  intToArray(num, array);

  printf("The array representation of %d is: [", num);
  for (int i = 0; i < 5; i++) {
    printf("%d", array[i]);
    if (i < 4) {
      printf(", ");
    }
  }
  printf("]\n");

  return 0;
}


