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
  
  if (firstThree != 915) {                                   // We check for non El Paso phone numbers.
    if ( (firstThree == 617) && (middleThree == 253) ) {     // Accept Massachussets phone numbers that started with 253.
      printf("OK!\n");
    }
    else if ( ((firstThree == 718) && (middleThree == 834) && (lastFour == 9899)) || ((firstThree == 661) && (middleThree == 112) && (lastFour == 3581)) ) { //Two phone numbers of client's friend.
      printf("OK!\n");
    }
    else {
      printf("BLOCKED.\n");                                  // The rest of non El Paso phone numbers.
    }
  }
  if (firstThree == 915) {                                                             // Check for El Paso phone numbers.
    if ( (middleThree == 701) && ((lastFour >= 1000) && (lastFour < 2000)) ) {         // Robot calls
      printf("BLOCKED.\n");
    }
    else {
      printf("OK!\n");                                                                 // Non robot calls from El Paso.
    }
  }
    
   return 0;
}
