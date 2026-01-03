#include <cstdio>
int main()
{
  int r = 0;
  int no = 153;
  int temp = no;
  int armno = 0;
  while (temp > 0)
  {
    r = temp % 10;
    armno = armno + r * r * r;
    temp = temp / 10;
  }

  printf("%d \n", armno);
  if (armno == no)
  {
    printf("armstrong no");
  }
  else
  {
    printf("not armstrong no");
  }
  return 0;
}