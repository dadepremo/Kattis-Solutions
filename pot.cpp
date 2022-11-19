#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int num, exp;
        num = t / 10;
        exp = t % 10;
        t = pow(num, exp);
        x += t;
    }
    cout << x << endl;
}