#include <stdio.h>

void main_screen(void) {

   long long phoneNumber;
   int firstThree;
   int middleThree;
   int lastFour;
   
   scanf("%lld", &phoneNumber);
  
   firstThree = phoneNumber / 10000000;
   middleThree = (phoneNumber % 10000000) / 10000;
   lastFour = phoneNumber % 10000;
  
  if (firstThree != 915) {
    if ( (firstThree == 617) && (middleThree == 253) ) {
      printf("OK!\n");
    }
    else if ( ((firstThree == 718) && (middleThree == 834) && (lastFour == 9899)) || ((firstThree == 661) && (middleThree == 112) && (lastFour == 3581)) ) {
      printf("OK!\n");
    }
    else {
      printf("BLOCKED.\n");
    }
  }
  if (firstThree == 915) {
    if ( (middleThree == 701) && ((lastFour >= 1000) && (lastFour < 2000)) ) {
      printf("BLOCKED.\n");
    }
    else {
      printf("OK!\n");
    }
  }
    
   return 0;
}
