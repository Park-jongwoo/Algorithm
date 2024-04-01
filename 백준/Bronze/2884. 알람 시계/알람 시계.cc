#include <iostream>
using namespace std;

int main() {

    int H;
    int M;

    cin >> H >> M;

    if( M -45 < 0)
    {
        if( H == 0 )
        {
            H = 23;
        }
        else
        {
            H--;
        }
        M = 60 - ( 45 -M);
    }
    else 
    {
        M = M-45;
    }

    cout << H << ' ' << M << endl;

    return 0;
}