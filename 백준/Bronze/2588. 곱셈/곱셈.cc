#include <iostream>
using namespace std;

int main() {
    
    int a ;
    int b;
    

    std :: cin >> a;
    std :: cin >> b;

    int c = a*(b%10);
    int d = a*((b%100)/10);
    int e = a*((b%1000)/100);
    int f = a*b;

    
    std::cout << c << endl;
    std::cout << d << endl;
    std::cout << e << endl;
    std::cout << f << endl;

    return 0;
}