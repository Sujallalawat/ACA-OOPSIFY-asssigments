#include<iostream>
using namespace std;

void swap(int *x, int *y) {
        int z = *x;
        *x = *y;
        *y = z;
    }
int main(){
    
    int x = 5;
    int y = 6;
    cout << "the number before swap are x = " << x << " and y = " << y << endl;
    swap(&x,&y);
    cout << "the number after swap are x = " << x << " and y = " << y << endl;

    return 0; 
    }
 

