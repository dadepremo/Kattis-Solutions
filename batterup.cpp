#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double t = 0, c = 0;

    while(n--) {
        double temp;
        cin >> temp;
        if(temp >= 0) {
            c++;
            t += temp;
        }
    }

    cout << t/c << endl;
}