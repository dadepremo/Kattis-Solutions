#include <iostream>

using namespace std;

int main() {
	
	int n, m;
	cin >> n;
	int x[n];

	for(int i=0; i<n; i++) {
		cin >> m;
		x[i]=m;		
	}
	for(int i=n-1; i>=0; i--) {
		cout << x[i] << endl;
	}
}