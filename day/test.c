a#include<stdio.h>
int main()
{   int x,y,z,a;
    input(&x,&y,&z);
    a = compute(x,y,z);
    output(a);
}

int input(int *a, int *b, int *c)
{
   printf("enter 1st number\n");
   scanf("%d",a);
   printf("enter 2nd number\n");
   scanf("%d",b);
   printf("enter 3nd number\n");
   scanf("%d",c);
}
//using tarnary operator
int compute(int a, int b, int c)
{ 
     return ((a<b?a:b)>c?c:(a<b?a:b));	 
}
int output(int m)
{
    printf(" the smallest number is %d", m);
}
