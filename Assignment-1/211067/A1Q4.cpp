#include <bits/stdc++.h>

using namespace std ;
struct student 
{
    string name ;
    int rollNumber ;
    string department ;

};
int main (){
int n ;
cin >> n ;
student students[10000];
while (n--){
    int query ;
    cin >>  query ;
    student p ;
    if (query==1)
    {// Store student information
        string name ;
    cin >> name ;
    int rollNumber ;
    cin >> rollNumber;
string department ;
cin >> department ;
        students[rollNumber].name = name;
            students[rollNumber].rollNumber = rollNumber;
            students[rollNumber].department = department;


    }
    else if (query==0){
         // Retrieve student information
        int rollNumber ;
        cin >> rollNumber;
         if (students[rollNumber].name.empty()) {
                cout << -1 << endl;
    }
    else {
                cout << "Name: " << students[rollNumber].name << endl;
                cout << "Roll Number: " << students[rollNumber].rollNumber << endl;
                cout << "Department: " << students[rollNumber].department << endl;
            }
        }
    }
}
