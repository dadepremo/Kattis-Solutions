#include <iostream>

using namespace std;

int main() {
	
	int x, n;
	cin >> x >> n;
	int sum = x, xx;
	for(int i=0; i<n; i++) {
		cin >> xx;
		sum = (sum-xx)+x;
	}
	cout << sum;
}