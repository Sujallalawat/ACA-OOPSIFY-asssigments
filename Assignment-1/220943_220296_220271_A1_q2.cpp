#include<iostream>
using namespace std;

long ncr(int n,int r){
    if(r==0)
        return 1;
    return (n*ncr(n-1,r-1))/r;
}

int main(){
    int n,r;
    cin>>n>>r;
    long ans = ncr(n,r);
    cout << ans;

    return 0;
}