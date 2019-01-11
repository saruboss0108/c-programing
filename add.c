#include<stdio.h>
void input(int *a,int *b)
{
printf("Enter 1st number\n");
scanf("%d",a);
printf("Enter 2nd number\n");
scanf("%d",b);
}
int add(int a,int b)
{
int c;
c=a+b;
return c;
}
void output(int a,int b,int c)
{
printf("%d + %d = %d",a,b,c);
}

int main()
{
int x,y,z;
input(&x,&y);
    z=add(x,y);
output(x,y,z);
}

                         

