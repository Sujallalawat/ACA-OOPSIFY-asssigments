#include<iostream>
using namespace std;


int main(){
    int a,b;            //defining the integers
    cin>>a>>b;          //taking inputs

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<a<<" "<<b;    //printing swapped integers

    return 0;
}
