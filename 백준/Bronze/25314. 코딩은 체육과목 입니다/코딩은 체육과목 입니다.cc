#include <iostream>
using namespace std;

int main() 
{


    int b;

    cin >> b;

    for (int i = 0; i<b/4; ++i)
    {
        cout << "long";
        if (i < b/4 - 1) 
        {
            cout << " ";
        }

    }
    cout << " " << "int" << endl;
    return 0;
}