#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    short int w;
    cin >> w;
    short int d = w-2;

    if ((d>=2) && (d%2 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}