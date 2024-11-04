#include<stdio.h>
int main(){
  //Implicit Conversion
  //Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
  int a=10;
  int b=20;
  float c=a/b;
  printf("c=%f",c);
  //Explicit Conversion
  //Explicit conversion is done manually by placing the type in parentheses () in front of the value.
  int d=10;
  int e=20;
  float f=(float)a/b;
  printf("f=%f",f);
  return 0;
}
