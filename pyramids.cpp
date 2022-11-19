#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, l=0, p=1;
    cin >> n;
    
    bool f = true;
    int x = 0;
    while(f) {
    	x = n-pow(p, 2);
    	if(x>=0) {
    		n -= pow(p,2);
    		l++;
    		p += 2;
    		
		}
		else f = false;
	}
	cout << l;
}