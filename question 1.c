#include<stdio.h>
#include<conio.h>
int lcm(int a,int b);
int main()
{ int a,b;
    printf("enter a num: ");
    scanf("%d",&a);
    printf("enter a num: ");
    scanf("%d",&b);
    printf("LCM of %d and %d is %d",a,b,lcm(a,b));
 return 0;
}
int lcm(int a,int b)
{ int i;
     for(i=2;i<=a*b;i++)
     {
       if(i%a==0 && i%b==0)
            break;
     }
 return i;
}
