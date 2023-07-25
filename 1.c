#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( ( n & 1 ) == 0 ){
    printf("%d は偶数です\n", n);
  }
  /*if文の条件を( ( n & 1 ) ) == 0 )とすることで、整数nの最下位ビットと1のAND演算を先に
　　行うようにした*/
  return 0;
}