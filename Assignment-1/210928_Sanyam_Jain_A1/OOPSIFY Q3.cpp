#include <iostream>
#include <string>

using namespace std;

string convert(string text){
    string final="";
    for (char c : text){
        if (islower(c)){
            final += toupper(c);
        }
        else if (isupper(c)){
            final += tolower(c);
        }
        else {
            final =+ c;
        }
    }
    return final;
}

int main(){
    string text;
    getline(cin,text);
    string final =convert(text);
    cout<<"Original text is '"<<text<<"' and after conversion is '"<<final<<"'"<<endl;
}