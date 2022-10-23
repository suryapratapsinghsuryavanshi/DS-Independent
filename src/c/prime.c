#include<stdio.h>
#include<conio.h>
int Isprime(int);
int main()
{
 int num;
 printf("Enter a number to check a number is prime or not: ");
 scanf("%d",&num);
 int result= Isprime(num);
 if(result){
    printf("%d is prime number",num);
 }else{
    printf("%d is not prime number",num);

 }
 }
 
 int Isprime(int num)
 {
 int i=0;
  for(i=2;i<num;i++)
  {
  if(num%i==0){
  return(0);
  }
  }
  if(num==i){
  return(1);
  }
  }
