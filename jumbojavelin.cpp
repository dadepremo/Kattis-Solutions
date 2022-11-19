#include <iostream>

using namespace std;

int main() {
    
    int n, l=0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
    	int r;
    	cin >> r;
    	l += r;
	}
	cout << (l-n)+1;
}