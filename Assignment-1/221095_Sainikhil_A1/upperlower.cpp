#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    getline(cin, str);
    int i=0;
    while(str[i]!=0){
        if(str[i]>=97 && str[i]<=122)str[i]=str[i]-32;
        else if(str[i]>=65 && str[i]<=90)str[i]=str[i]+32;
        i++;
    }
    cout<<"The string after converting:"<<str;
    return 0;
}