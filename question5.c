/*Write a function to print first N prime numbers (TSRN)*/
#include<stdio.h>
#include<conio.h>
void prime(int num);
int main()
{
 int num;
    printf("enter range to print all prime numbers:");
    scanf("%d",&num);
      prime(num);
 return 0;
}
void prime(int n)
{
  int i,j;
    printf("prime numbers are:\n");
    for(i=2;i<=n;i++)
    {  for(j=2;j<=i;j++)
        { if(i%j==0)
            break;
        }if(i==j)
            printf("%d\n",i);
    }
}
