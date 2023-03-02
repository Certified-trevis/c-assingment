#include <stdio.h>

double cylinder_volume(double radius, double height) {
  const double pi = 3.14159265358979323846;
  return pi * radius * radius * height;
}

int main() {
  double radius, height;
  printf("Enter the radius of the cylinder: ");
  scanf("%lf", &radius);
  printf("Enter the height of the cylinder: ");
  scanf("%lf", &height);
  double volume = cylinder_volume(radius, height);
  printf("The volume of the cylinder with radius %lf and height %lf is %lf\n", radius, height, volume);
  return 0;
}
