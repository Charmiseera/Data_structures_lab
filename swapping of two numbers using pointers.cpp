#include  <stdio.h>
void swap(int*,int*);
int main()
{
      int a,b;
      printf("enter a:");
      scanf("%d",&a);
    printf("enter b:");
      scanf("%d",&b); 
      printf("Before swapping:a=%d,b=%d\n",a,b);
      swap(&a,&b);
      printf("After swapping:a=%d,b=%d",a,b);
}

void swap(int *x, int *y)
{
      int t;
      t=*x;
      *x=*y;
      *y=t;
}
