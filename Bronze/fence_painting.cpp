#include <iostream>
#include <vector>
using namespace std;

int main() {
	// freopen("paint.in", "r", stdin);
	// freopen("paint.out", "w", stdout);

    vector<int> fences(100);
    short int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(short i = a; i < b; i++)
        fences[i] = true;

    for(short int i = c; i < d; i++)
        fences[i] = true;

    short int t = 0;
    for(short int i = 0; i < fences.size(); i++)
        t += fences[i];
    
    cout << t << endl;
}