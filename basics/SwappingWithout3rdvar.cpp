#include <cstdio>
int main() {
  int a = 25, b = 30;
  a = b;
  b = a;
  printf("a=%d\n", b);
  printf("b=%d\n", a);

  return 0;
}