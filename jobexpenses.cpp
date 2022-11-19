#include <iostream>

using namespace std;

int main() {
    
    int n, tot=0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
  	 int exp;
        cin >> exp;
        if(exp<0) {
        	tot -= exp;
		}
    }
    cout << tot;
}