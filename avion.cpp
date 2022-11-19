#include <iostream>
#include <string>

using namespace std;

int main() {
    
    bool x = false;
    for(int i=1; i<=5; i++) {
        string s;
        cin >> s;
        if(s.find("FBI") != -1) {
            cout << i << " ";
            x=true;
        }
    }
    if(x) {
        cout << endl;
    }
    else {
        cout << "HE GOT AWAY!" << endl;
    }
    
