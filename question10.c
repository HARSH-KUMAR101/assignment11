#include<stdio.h>
int fact(int x);
int main()
{ int i;
  float sum=0;
    for(i=1;i<=5;i++)
    {
     sum=sum+fact(i)/i;
    }
    printf("sum is %.2f",sum);
 return 0;
}
int fact(int x)
{int sum=1;
    while(x!=0)
  { sum=sum*x;
      x--;
  }
 return sum;
}
