#include <iostream>

using namespace std;

void swapInt(int& a, int& b){
    a=a+b;
    b=a-b;
    a=a-b;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    
    cout<<"Number 1 before swapping is "<<a<<endl;
    cout<<"Number 2 before swapping is "<<b<<endl;
    swapInt(a,b);
    cout<<"Number 1 after swapping is "<<a<<endl;
    cout<<"Number 2 after swapping is "<<b<<endl;
}