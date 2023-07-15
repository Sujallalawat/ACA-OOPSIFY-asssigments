#include <iostream>
using namespace std;

int main()
{

    string str;
    getline(cin, str);
    string x = "";
    for (int i = 0; i < str.length(); i++) {

        char ch = str[i];

        if (isupper(ch))
            x += tolower(ch);

        else
            x += toupper(ch);
    }

    cout << x << endl;
    return 0;
}
