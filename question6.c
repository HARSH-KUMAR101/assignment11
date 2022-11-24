/*Write a function to print all Prime numbers between two given numbers. (TSRN)*/
#include<stdio.h>
#include<conio.h>
void prime(int a,int b);
int main()
{
 int a,b;
    printf("enter range to print all prime numbers:");
    printf("\nenter first num to print all prime numbers:");
    scanf("%d",&a);
    printf("enter second num to print all prime numbers:");
    scanf("%d",&b);
      prime(a,b);
 return 0;
}
void prime(int x,int y)
{
  int i,j;
    printf("prime numbers are:\n");
    for(i=x;i<=y;i++)
    {  for(j=2;j<=i;j++)
        { if(i%j==0)
            break;
        }if(i==j)
            printf("%d\n",i);
    }
}
