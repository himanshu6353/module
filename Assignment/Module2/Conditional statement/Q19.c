//electric bill unit counter

#include <stdio.h>

main() 
{
  int id, unit;
  char name[50];
  float bill = 0.0;

  printf("Enter customer ID: ");
  scanf("%d", &id);

  printf("Enter customer name: ");
  scanf("%s", name);

  printf("Enter unit consumed: ");
  scanf("%d", &unit);

  if (unit <= 350) 
  {
    bill = unit * 1.20;
  } 
  else if (unit <= 600) 
  {
    bill = (350 * 1.20) + ((unit - 350) * 1.50);
  } 
  else if (unit <= 800) 
  {
    bill = (350 * 1.20) + (250 * 1.50) + ((unit - 600) * 1.80);
  } 
  else 
  {
    bill = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + ((unit - 800) * 2.00);
  }

  if (bill > 800) 
  {
    bill += (bill * 0.18);
    if (bill < 256) 
    {
      bill = 256;
    }
  }

  printf("\nCustomer ID: %d", id);
  printf("\nCustomer Name: %s", name);
  printf("\nTotal Bill: Rs. %.2f", bill);
}
