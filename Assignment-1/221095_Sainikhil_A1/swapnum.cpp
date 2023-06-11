#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout <<"Enter first number:";
    cin >>num1;
    cout <<"Enter second number:";
    cin >>num2;
    num1=num1+num2;
    num2=num1-2*num2;
    num1=(num1-num2)/2;
    num2=num1+num2;
    cout <<"The reversed numbers are "<< num1<<" " << num2;
   return 0; 
}