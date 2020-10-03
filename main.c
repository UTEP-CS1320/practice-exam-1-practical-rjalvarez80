#include <stdio.h>
#include "p1_avg.h"
#include "p2_screen.h"

int main(void) {
  int opt;
  printf("Enter 1 to test P1, 2 to test P2: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    main_avg();
  } else if(opt == 2) {
    main_screen();
  }
}
