#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int k,n,w,t = 0;
	cin >> k >> n >> w;

	for(int i = 1; i<=w;i++)
		t += i*k;
		
	int r = max(0,t-n);
	cout << r << endl;
}
