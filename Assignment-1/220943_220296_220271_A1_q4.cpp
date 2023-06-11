#include<iostream>
using namespace std;
struct Student {
    string name;
    int roll_number;
    string department;
};

int main() {
    int n;
    cin >> n;
    Student students[1000];

    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;

        if (q == 1) {
            string name, department;
            int roll_number;
            cin >> name >> roll_number >> department;
            students[roll_number].name = name;
            students[roll_number].roll_number = roll_number;
            students[roll_number].department = department;
        } else if (q == 0) {
            int roll_number;
            cin >> roll_number;
            if (students[roll_number].roll_number == roll_number) {
                cout << "Name: " << students[roll_number].name << ", Roll Number: " << students[roll_number].roll_number << ", Department: " << students[roll_number].department << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}