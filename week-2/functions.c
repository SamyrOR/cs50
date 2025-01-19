#include <cs50.h>
#include <stdio.h>

int valid_triangle(int a, int b, int c);

int main(void) {
  int a = get_int("First side: ");
  int b = get_int("Second side: ");
  int c = get_int("Third side: ");
  int result = valid_triangle(a, b, c);
  if (result > 0) {
    printf("false\n");
  } else {
    printf("true\n");
  }
}

int valid_triangle(int a, int b, int c) {
  if (a <= 0 || b <= 0 || c <= 0) {
    return 1;
  }
  int firstSide = a + b > c ? 0 : 1;
  int secondSide = b + c > a ? 0 : 1;
  int thirdSide = c + a > b ? 0 : 1;
  if (firstSide > 0 || secondSide > 0 || thirdSide > 0) {
    return 1;
  }
  return 0;
}
