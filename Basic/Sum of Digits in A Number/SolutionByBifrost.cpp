#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){
  int a;
  cout<<"Enter Number: ";
  cin>>a;
  int sum=0;
  while(a>10){
    sum+=(a%10);
    a=a/10;
  }
  sum+=a;
  cout<<"Sum of Digits of Entered Number is: "<<sum;
  return 0;
}
