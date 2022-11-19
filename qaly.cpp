#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    long double t = 0;
    for(int i=0; i<n; i++) {
    	long double q, y;
    	cin >> q >> y;
    	t += q*y;
	}
	
	cout << t;
}