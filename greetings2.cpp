#include <iostream>

using namespace std;

int main() {
	
	string s, x="h";
	cin >> s;
	
	bool found = false;
	int i = s.find('e'), count=0;
	while(!found) {
		if(s.at(i)=='e')
			count++;
		else
			found = true;
		i++;
	}
	for(int j=0; j<count*2; j++) {
		x += "e";
	}
	x += "y";
	
	cout << x;
}