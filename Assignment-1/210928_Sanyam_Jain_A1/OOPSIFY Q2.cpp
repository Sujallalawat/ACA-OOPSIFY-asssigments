#include <iostream>

using namespace std;

int fun(int n, int r){
    if (n<r || r<0 || n<0){
        return -1;
    }
    int i;
    int value=1;
    for(i=0;i<r;i++){
        value=value*(n-i);
        value=value/(i+1);
    }
    return value;
}

int main(){
    int n,r;
    cin>>n;
    cin>>r;
    int c= fun(n,r);
    if (c== -1){
        cout<<"Invalid input"<<endl;
    }
    else {
        cout<<"For n = "<<n<<" and r = "<<r<<" value of nCr is "<<c<<endl;
    }
    
    
}