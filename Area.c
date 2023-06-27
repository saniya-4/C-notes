#include <stdio.h>
#include <conio.h>
int main()
{
  int choice;
  printf("enter your choice");
  printf("/n1 area of rectangle");
  printf("/n2 area of square");
  printf("/n3 area of circle");
  scanf("%d", &choice);
  switch (choice)
  {

  case 1:
  {
    int l, b;
    printf("enter the length and breath");
    scanf("%d%d", &l, &b);
    printf("the area is %d", l * b);
    break;
  }
  case 2:
  {
    int side;
    printf("enter the side");
    scanf("%d", &side);
    printf("the area is %d", side * side);
    break;
  }
  case 3:
  {
    float radius;
    printf("enter the radius");
    scanf("%f", &radius);
    printf("the area is %f", 22 / 7 * radius * radius);
    break;
  }
  default:
    printf("invalid value");
    break;
  }
  return 0;
}