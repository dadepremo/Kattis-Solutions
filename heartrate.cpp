#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
    	double d1, d2;
        cin >> d1 >> d2;

        double r = 60.0 * (d1 / d2);
        double var = 60.0 / d2;

        cout << r - var << " " << r << " " << r + var << endl;
	}
}