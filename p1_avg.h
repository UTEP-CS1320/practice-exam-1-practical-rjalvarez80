#include <stdio.h>

void main_avg(void) {
  int n;
  scanf("%d", &n);
  if(n == 3) {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("%0.3lf\n", 1.0 * (x1 + x2 + x3) / 3);
  } else {
    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    printf("%0.3lf\n", 1.0 * (x1 + x2 + x3 + x4) / 4);
  }
}
