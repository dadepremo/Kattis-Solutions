#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "Abracadabra";
    int n;
    cin >> n;
    for(int i=0; i<n; i++) { cout << i+1 << " " << s << endl; }
}