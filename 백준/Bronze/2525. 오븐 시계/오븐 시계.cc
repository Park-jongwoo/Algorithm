#include <iostream>
using namespace std;

int main() {
    int H, M, C;
    cin >> H >> M;
    cin >> C;

    M += C;
    H += M / 60;
    M %= 60;
    H %= 24;

    cout << H << ' ' << M << endl;

    return 0;
}