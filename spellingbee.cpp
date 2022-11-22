#include <iostream>
#include <vector>
#include <algorithm>   

using namespace std;

int main() {
	string s, x;
	cin >> s;
	
	int n, count = 0;
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> x;
		for(int j=0; j<x.length(); j++) {
			if(s.find(x.at(j)) != string::npos) {
				count++;
			}
		}
		if(count==x.length() && x.find(s.at(0)) != string::npos && count >= 4) {
		    cout << x << endl;
		}
		count = 0;
	}
}