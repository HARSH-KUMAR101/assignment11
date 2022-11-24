/*Write a function to calculate HCF of two numbers. (TSRS)*/
#include<stdio.h>
#include<conio.h>
int hcf(int a,int b);
int main()
{ int a,b;
    printf("enter first num: ");
    scanf("%d",&a);
    printf("enter second num: ");
    scanf("%d",&b);
    printf("HCF of %d and %d is %d",a,b,hcf(a,b));
 return 0;
}
int hcf(int a,int b)
{ int i;
     for(i=a*b;i>=1;i--)
     {
       if(a%i==0 && b%i==0)
            break;
     }
 return i;
}

