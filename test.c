#include <stdio.h>

int predn2(){
     int c;
c = getchar();
putchar(c);
 putchar('\n');
 printf("%d", c);
 return 0;
}

int predn3(){
 int a=2, b=3, c=4, d=5, e=6;
 printf("%g\n", (e / --a * b++ / c++));
 printf("a: %d, b: %d, c: %d, d: %d, e: %d\n", a, b, c, d, e);
 a %= b = d = 1 + e / 2;
 printf("a: %d, b: %d, c: %d, d: %d, e: %d\n", a, b, c, d, e);
 return 0;
}

int main()
{
  predn3();
 return 0;
}
