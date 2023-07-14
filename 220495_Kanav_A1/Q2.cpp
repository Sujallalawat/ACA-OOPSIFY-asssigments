#include <iostream>
using namespace std;

int comb(int n,int r){
    if(n==r) return 1;
    else if(r==1) return n;
    else return comb(n-1,r)+comb(n-1,r-1);          //using the formula nCr = (n-1)Cr + (n-1)C(r-1)
}

int main(){
    int n,r;         //defining the variables n,r of nCr
    cin>>n>>r;
    cout<<comb(n,r);
}
