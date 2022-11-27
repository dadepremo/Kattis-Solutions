#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	string ss;
	for(int i=0; i<n; i++) {
		string ans="";
		cin >> s >> ss;
		for(int j=0; j<s.length(); j++) {
			if(s.at(j)==ss.at(j))
				ans += ".";
			else
				ans += "*";
		}
		cout << s << endl << ss << endl << ans << endl << endl;
	}
	
}