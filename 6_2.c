#include <stdlib.h> 
#include <time.h>
#include <math.h>
#include <stdio.h>

int KilVid(float col, int a[]); //кількість від’ємних елементів масиву
int Sum(float row, int b[]); //суму елементів масиву, розташованих після мінімального за модулем елемента
int main(void) {
const int colCount=5, Low=-100, High=100; 
srand(time(0));
int a[colCount];
int Kilkist,Suma;
for (int i=0; i<colCount; i++)
{
a[i]=Low+rand()%(High-Low+1);
printf("a[%d]=%d\n", i, a[i]);
}
Kilkist=KilVid(colCount, a);
Suma=Sum(colCount, a);
printf("\nкількість від’ємних елементів масиву:%d\n", Kilkist);
printf("суму елементів масиву, розташованих після мінімального за модулем елемента:%d", Suma);
return 0;
}
int KilVid(float col, int a[])
{
  int f=0;
  for (int i=0; i<col; i++)
  {
    if(a[i]<0)
    f+=1;
  }
  return f;
}

int Sum(float row, int b[])
{
int f=0;
int min = b[0], mi, sum=0;
for(int i = 0; i < row; i++) //обчислення мін. числа
{
 if(min > b[i])
 {
 min = b[i];
 }
}
for(int i = 0; i < row; i++) //обчислення індекса мін. числа
{
 if(min==b[i])
 {
 mi = i;
 }
}
for(int i = 0; i < row; i++) //сума чисел після мін. числа
{
 if(i>mi)
 {
 sum+=b[i];
 }
}
return sum;
}