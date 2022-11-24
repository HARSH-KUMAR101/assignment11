/*Write a function to find the next prime number of a given number. (TSRS)*/
#include<stdio.h>
#include<conio.h>
int primecheck(int num);
int main()
{ int num;
     printf("enter a number to get its next prime num: ");
     scanf("%d",&num);
      printf("%d is your nearest next prime number",primecheck(num));
 return 0;
}
int primecheck(int x)
{  int i,j;
     for(i=x+1;i;i++)
     { for(j=2;j<=i;j++){
          if(i%j==0)
            break;
        }if(i==j)
           return i;
          else
            i++;
     }
}
