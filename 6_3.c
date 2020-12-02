#include <stdio.h>
#include <locale.h>
#include <math.h>
int Suma(int a[], int col); 
int main()
{
    int colCount,sum;
    scanf("%d", &colCount); 
    int a[colCount];
for(int i = 0; i < colCount; i++)
{
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
}
sum=Suma(a,colCount);
printf("суму елементів одновимірного масиву з непарними індексами:%d",sum);
}

int Suma(int a[], int col)
{
int suma=0;
for(int i = 0; i < col; i++) //обчислення непарних елементів масиву
{
 if(i%2!=0)
 {
 suma+=a[i];
 }
}
return suma;
}