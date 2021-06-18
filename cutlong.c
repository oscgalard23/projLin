#include <stdio.h>

int main () {

  float startOfcut,endOfcut;
  printf("where the cut should start?: ");
  scanf("%f",&startOfcut);
  printf("where the cut should end?: ");
  scanf("%f",&endOfcut);

  int start2int,end2int;
  start2int = startOfcut;
  end2int = endOfcut;

  int totalMins;
  totalMins = end2int - start2int;

  int startsec,endsec,totalSec;
  startsec = (startOfcut - start2int)*100;
  endsec = (endOfcut - end2int)*100;
  totalSec = (60 - startsec) + endsec;

  if (totalSec >= 60) {
    totalMins += 1;
    totalSec -= 60;
  }

  printf("The time of your cut is: \n");
  printf("minutes: %d\n", totalMins);
  printf("seconds: %d\n", totalSec);

}
