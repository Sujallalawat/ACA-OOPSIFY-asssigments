#include <iostream>
using namespace std;

int main()
{


	int a, b, c;
	cout << " 1st integer : ";
	cin >> a ;
	cout << " 2nd integer : ";
	cin >> b;	
	c=b;
	b=a;
	a=c;
    cout << " new 1st integer is : "<< a <<"\n" ; 
    cout << " new 2nd integer is : "<< b <<"\n\n" ; 	
    return 0;
}
