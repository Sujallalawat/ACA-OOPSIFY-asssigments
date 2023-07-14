#include <iostream>
using namespace std;
int main(){
    int n, r;
    cout<< "Enter the value of n:";
    cin>> n;
    cout<<"Enter r:";
    cin>> r;
    int num=1, den=1;
    for(int i=0; i<r; i++){//since ncr=(n*n-1*....*n-r+1)/(r*r-1*..2*1)
        num=num*(n-r+1+i);//both numerator and denominator have same no of terms so can be calculated in same loop and i divided them.
        den=den*(i+1);
    }
    cout<< "The value of nCr is "<< num/den;
    return 0;
}