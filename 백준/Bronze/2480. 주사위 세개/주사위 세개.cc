#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    int M;


    cin >> A >> B >> C;
    int dice[3] = {A, B, C};
    sort(dice, dice+3);

    if(dice[0] == dice[2])
    {
        M = 10000 + (dice[0] * 1000);
    }
    else if ( dice[0] == dice[1] || dice[1]== dice[2])
    {
        M = 1000+(dice[1] * 100);
    }
    else
    {
        M = dice[2] * 100;
    }

    cout << M << endl;

    return 0;

}