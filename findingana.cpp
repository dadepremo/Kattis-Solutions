#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << s.erase(0, s.find("a"));
}
