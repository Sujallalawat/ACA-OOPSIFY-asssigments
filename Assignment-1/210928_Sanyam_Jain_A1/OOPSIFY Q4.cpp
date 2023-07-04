#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int RollNo;
    string department;
};

int main(){
    int n;
    cin>>n;
    int i,j;
    Student info[1000000];
    for (i=0;i<n;i++){
        cin>>j;
        if (j==1){
            string a;
            int b;
            string c;
            cin>>a;
            cin>>b;
            cin>>c;
            info[b].name=a;
            info[b].RollNo=b;
            info[b].department=c;
        }
        if (j==0){
            int d;
            cin>>d;
            if (info[d].RollNo==d){
                cout<<"Name of student of Roll No '"<<info[d].RollNo<<"' is '"<<info[d].name<<"' and department is '"<<info[d].department<<"'"<<endl;
            }
            else{
                cout<< -1;
            }
        }
    }
}