#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int l = 0;
    while (n>0)
    {
        n-=1;
        int a,b,c;
        cin >> a >> b >> c;
        if ((a+b+c)>1) {
            l+=1;
        }
    }

    cout << l << endl; 
}
