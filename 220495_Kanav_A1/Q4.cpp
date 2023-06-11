#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

struct Student{                         // defining a structure
    string name;                    
    int roll_no;
    string department;
};

int main(){
    int t;                                  // total no. of inputs
    cin>>t;
    struct Student data[t];
    int k=0;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n==1){
            cin>>data[k].name>>data[k].roll_no>>data[k].department;                         //take info. if query = 1
            k++;
        }
        else if(n==0){
            int roll;
            cin>>roll;
            for(int j=0;j<k;j++){                                                           // print output if query = 0
                if(data[j].roll_no == roll){
                    cout<<data[j].name<<" "<<data[j].roll_no<<" "<< data[j].department<< endl;
            }
        }
    }
    else cout<<"-1";
    }
}
