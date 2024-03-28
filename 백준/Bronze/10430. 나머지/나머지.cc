#include <iostream>
using namespace std;

int main() {
    
    int a ;
    int b ;
    int c ;

    std :: cin >> a;
    std :: cin >> b;
    std :: cin >> c;
    
    std::cout << (a+b)%c << endl;
    std::cout << ((a%c)+(b%c))%c << endl;
    std::cout << (a*b)%c << endl;
    std::cout << ((a%c) * (b%c))%c << endl;

    return 0;
}