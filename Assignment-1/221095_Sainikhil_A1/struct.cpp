#include <iostream>
#include <string>
using namespace std;
struct student{
    char name[50];
    int rollno;
    char department[50];
};
int main(){
    int n;
    cin>>n;
    struct student stu[n];
    for(int i=0; i<n; i++){
        int a;
        cin>> a;
        if(a==1){
            cin>> stu[i].name;
            cin>> stu[i].rollno;
            cin.getline(stu[i].department, 50);
            //getline(cin, stu[i].department);
        }
        else if(a==0){
            int query_no;
            cin>> query_no;
            int flag=0;
            for(int j=0; j<i; j++){
                if(query_no==stu[j].rollno){
                    cout<<stu[j].name<<"\n"<<stu[j].rollno<<"\n"<<stu[j].department;
                    flag=1;
                    break;
                }
            }
            if(flag==0)cout<<"-1";
        }
    }
    return 0;
}