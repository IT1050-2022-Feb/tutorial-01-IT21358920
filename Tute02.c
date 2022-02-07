/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance = 0;
  float finalAmount = 0;
  
  printf("Enter the distance in km : ");
  scanf("%f", &distance);

  if(distance >= 0 && distance <= 30)
  {
    finalAmount = distance * 50;
  }
  else if(distance > 30)
  {
    finalAmount = (30 * 50) + (distance - 30) * 40;
  }
  else
  {
    printf("\nError");
    return 0;
  }

  printf("\nFinal Amount to be Paid : Rs.%.2f", finalAmount);
  return 0;
}
