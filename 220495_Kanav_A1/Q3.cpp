#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;                      //total no. of input lines
    cin>>t;
    while(t--){
        string str;         
        cin>>str;               //taking input of string
        int i =0;                 
        while(str[i]!='\0'){
            if((int)str[i]<123 && (int)str[i]>96) str[i] = (int)str[i] - 32;     //if character is uppercase it will be converted to lowercase 
            else str[i]= (int)str[i] +32;                                        //if character is lowercase it will be converted to uppercase
            i++;         
        }
        cout << str << endl;                //printing the desired sring   
    }
    return 0;
}
