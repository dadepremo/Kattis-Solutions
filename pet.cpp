#include <iostream>
using namespace std;
int main() {
    int g1, g2, g3, g4, n, sum=0, best=0, stud;
    for(int i=0; i<5; i++) {
    	cin >> g1 >> g2 >> g3 >> g4;
    	sum = 0;
    	sum = g1 + g2 + g3 + g4;
		if(sum>best) {
			best = sum;
			stud = i+1;
		}
	}
	cout << stud << " " << best;
}