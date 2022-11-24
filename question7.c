/*Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
#include<conio.h>
void fib(int num);
int main()
{
  int num;
     printf("enter range to print fibonacci series:");
     scanf("%d",&num);
       fib(num);
return 0;
}
void fib(int x)
{ int a=1,b=0,c,i;
     for(i=1;i<=x;i++)
     { c=a+b;
         printf("%d ",c);
         a=b;
         b=c;
     }
}
