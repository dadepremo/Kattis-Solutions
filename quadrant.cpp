#include <iostream>

using namespace std;

int main() {
    
    int x, y;
    cin >> x;
    cin >> y;
    
    if((x>0) && (y>0)){
    	cout << 1;
	}
	else if((x>0) && (y<0)) {
		cout << 4;
	}
	else if((x<0) && (y>0)) {
		cout << 2;
	}
	else {
		cout << 3;
	}
}