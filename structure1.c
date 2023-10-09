#include<stdio.h>
#include<string.h>

struct Car {
  char brand[50];
  char model[50];
  int year;
  char prize[20];
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999,"1 crore"};
  struct Car car2 = {"Ford", "Mustang",1969,"74 lakh"};
  struct Car car3 = {"Toyota", "Corolla", 2011,"17 lakh"};
  strcpy(car3.prize,"20 lakh");

  printf("%s %s %d %s\n", car1.brand, car1.model, car1.year,car1.prize);
  printf("%s %s %d %s\n", car2.brand, car2.model, car2.year,car2.prize);
  printf("%s %s %d %s\n", car3.brand, car3.model, car3.year,car3.prize);

  return 0;
}