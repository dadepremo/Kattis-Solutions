#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(floor(n/10000)==555) {
    	cout << 1;
	} else {
		cout << 0;
	}
}
