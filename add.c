#include<stdio.h>

struct add{
    int a,b;
};
int input(struct add* q)
{
   printf("enter 2 numbers\n");
   scanf(" %d %d", &q->a, &q->b);

}
/*int input1(void)
{
   int a,b;
   printf("enter 2 numbers\n");
   scanf("%d",&a);
   return a;
}
int input2(void)
{
   int b;
   scanf("%d",&b);
   return b;
}*/
int compute(int s,int r)
{
    int c = r+s;
    return c;
}
void output(int m)
{
    printf("sum = %d", m);
}
int main(void)
{   struct add q;
    input(&(q));
    int n=compute(q.a, q.b);
    printf(" a=%d, b=%d",q.a, q.b);
    output(n);
}
/*int main(void)
{
    int a=input1();
    int b=input2();
    int n=compute(a,b);
    output(n);
}*/


