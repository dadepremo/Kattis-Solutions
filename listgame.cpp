#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;

    int t = 0;
    while(n > 1) {
        int i;
        for(i = 2; i <= sqrt(n)+2; i++) {
            if(n % i == 0) {
                t++;
                n /= i;
                break;
            }
        }
        if(i > sqrt(n)) {
            t++;
            break;
        }
    }

    cout << t << endl;
}