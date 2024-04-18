#include <iostream>
using namespace std;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;

    cin >> c;



    for (int i=0; i< c; ++i)
    {
        int a,b;
    
        cin >> a >> b;
        
        cout << a + b << "\n";
        

    }

    return 0;
}