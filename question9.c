/*Write a program in C to find the square of any number using the function.*/
#include<stdio.h>
#include<conio.h>
int square(int);
int main()
{
  int num;
    printf("enter a number and get its square: ");
    scanf("%d",&num);
      printf("square of %d is:%d",num,square(num));
}
int square(int x)
{
  return (x*x);
}
