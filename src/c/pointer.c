#include<stdio.h>
#include<conio.h>

int main()
{
 int *p; // this is diclaration of poiner and pointer is a spacial type of variable who is content another variable address;
  int a=5;
  p= &a;
  printf("Enter a number : ");
  scanf("%d",p);
  printf("the valu of a is= %d",a);
}
