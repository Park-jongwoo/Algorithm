#include <iostream>
using namespace std;

int main() 
{
    int p;
    int N;


    int sum = 0;
    cin >> p; 
    cin >> N;

    for( int i=0; i < N; ++i)
    {
        int a, b;
        cin >> a >> b;
        sum += a * b;
    }

    if ( p == sum )
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}