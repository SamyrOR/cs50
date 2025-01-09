#include <cs50.h>
#include <stdio.h>

// In C is important to declare the function signature
// Since its doesnt have hoisting
int get_positive_int(void);
void meow(int times);

int main(void) {
  int times = get_positive_int();
  meow(times);
}

int get_positive_int(void) {
  int n;
  do {
    n = get_int("How many times to meow?\n");
  } while (n < 1);
  return n;
}

void meow(int times) {
  for (int i = 0; i < times; i++) {
    printf("meow\n");
  }
}
