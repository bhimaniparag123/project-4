/*
  1 0 1 0 1
    1 0 1 0
      1 0 1
        1 0
          1
*/
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        // Print pattern of 1s and 0s
        for (int k = rows; k > i; k--) {
            printf("%d ", (k + i) % 2); // Calculate 1 or 0 based on position
        }
        printf("\n");
    }
}