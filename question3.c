/*Write a function to check whether a given number is Prime or not. (TSRS)*/
#include<stdio.h>
#include<conio.h>
int primecheck(int num);
int main()
{ int num;
    printf("enter a num to check whether it is prime or not: ");
    scanf("%d",&num);
    if(primecheck(num)==1)
        printf("%d is a prime num!",num);
    else
        printf("%d is not a prime num!",num);
 return 0;
}
int primecheck(int x)
{ int i;
     for(i=2;i<=x;i++)
     {
       if(x%i==0)
         break;
     }
     if(i==x)
        return 1;
     else
        return 0;
}
