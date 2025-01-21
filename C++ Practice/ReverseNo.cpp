#include <iostream>
int main() {
  int num = 153;
  int temp = num;
  int r = 0;
  int rnum = 0;

  while (temp > 0) {

    r = temp % 10;
    rnum = rnum * 10 + r;
    temp = temp / 10;
  }
  printf("reverse no = %d", rnum);
  return 0;
}