#include <stdio.h>

void main_avg(void) {
  int n;
  scanf("%d", &n);
  if(n == 3) {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("%d\n", (x1+x2+x3) / 3);
  } else {
    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    printf("%d\n", (x1+x2+x3+x4) / 3);
  }
}
