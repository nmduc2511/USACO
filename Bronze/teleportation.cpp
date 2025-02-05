#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // freopen("teleport.in", "r", stdin);
	// freopen("teleport.out", "w", stdout);

    int a,b,x,y;
    cin >> a >> b >> x >> y;

    int answer = abs(a-b);
    answer = min(answer, abs(a-x) + abs(y-b));
    answer = min(answer, abs(a-y) + abs(x-b));
    
    cout << answer << endl;
}