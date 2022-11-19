#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, w, h;
    cin >> n >> w >> h;
    double d = sqrt(pow(w, 2)+pow(h, 2));
    for(int i=0; i<n; i++) {
        int m;
        cin >> m;
        if(m<=d) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
}
