/*Write a function to print PASCAL Triangle. (TSRN)*/
#include<stdio.h>
#include<conio.h>
int fact(int);
int combi(int,int);
void printpascal(int);
int main()
{ int line;
    printf("enter num of lines for pascal triangle: ");
    scanf("%d",&line);
      printpascal(line);
 return 0;
}
int fact(int n)
{
 int f=1;
   while(n>=1)
   {
     f=f*n;
     n--;
   }
 return (f);
}
int combi(int n,int r)
{
  return (fact(n)/fact(n-r)/fact(r));
}
void printpascal(int line)
{
  int i,j,k,r;
    for(i=1;i<=line;i++)
    {  k=1;
       r=0;
      for(j=1;j<=line*2-1;j++){
        if(j>=line+1-i && j<=line-1+i && k){
           printf("%3d",combi(i-1,r));
           k=0; r++;
        }
        else
        {
           printf("   ");
           k=1;
        }
      }
      printf("\n");
    }
}
