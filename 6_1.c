#include <stdio.h>
#include <math.h>

float Perimeter(float x, float y); //Периметр
float Area(float x1, float y1); //Площа
int main(void) {
float a,b,P,S;
printf("введіть x:");
scanf("%g", &a);
printf("введіть y:");
scanf("%g", &b);
P=Perimeter(a,b);
S=Area(a, b);
printf("Периметр прямокутника:%g\n",P);
printf("Площа прямокутника:%g",S);
  return 0;
}
float Perimeter(float x, float y)
{
  float a,b,P;
  a=sqrt(pow(x-x,2)+pow(y-0,2)); //обчислення сторони а
  b=sqrt(pow(x-0,2)+pow(y-y,2)); //обчислення сторони б
  P=(a+b)*2; //обчислення Периметру
  return P;
}
float Area(float x1, float y1)
{
  float a,b,S;
  a=sqrt(pow(x1-x1,2)+pow(y1-0,2)); //обчислення сторони а
  b=sqrt(pow(x1-0,2)+pow(y1-y1,2)); //обчислення сторони б
  S=a*b; //обчислення Площи
  return S;
}