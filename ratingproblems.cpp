#include <iostream>

using namespace std;

int main() {
	double n, k, min=0, max=0, x;
	cin >> n >> k;
	for(int i=0; i<k; i++) {
		cin >> x;
		min += x;
		max += x;
	}
	for(int i=0; i<n-k; i++) {
		min -= 3;
		max += 3;
	}
	cout << min/n << " " << max/n;
}