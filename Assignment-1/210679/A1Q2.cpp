#include <iostream>

using namespace std;

int main()
{
    int n,r; 
    cin >> n >> r; //Takes input
    r = r<(n-r) ? r:(n-r); //Chooses minimum of r and n-r
    int num = 1, den = 1; //Defines initial numerator and denominator
    for(int i = 0; i<r;i ++) }
        num*= (n-i); 
        den*= (i+1); 
    }
    cout << "The value of " << n << "C" << r << " is " << num/den; //Prints output
    return 0;
}
