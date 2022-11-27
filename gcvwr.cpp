#include <iostream>

using namespace std;

int main() {
	
	int g, t, n, sum=0, xx;
	cin >> g >> t >> n;
	
	int x = ((g-t)*90)/100;
	for(int i=0; i<n; i++) {
		cin >> xx;
		sum += xx;
	}
	cout << x-sum;
}