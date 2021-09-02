#include <stdio.h>
int main() {
  char arr[5];
  for (int i = 0; i < 5; i++) {

    printf("\nenter the values for array %d", i);
    scanf("%c", &arr[i]);
    char t;
    scanf("%c", &t); // to get the lurking new line char in buffer.
  }

  for (int i = 0; i < 5; i++) {
    printf("The value of %dth element of array is %c\n", i, arr[i]);
  }
  return 0;
}