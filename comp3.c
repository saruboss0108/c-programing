#include<stdio.h>

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

int compute(int a, int b, int c)
{
    if(a < b && a < c)
    { return a;
  }
    if(b < c )
    {
        return b;
    }
    else
    {
        return c;
    }
}

int output(int m)
{
    printf(" the smaller number is %d", m);
}
