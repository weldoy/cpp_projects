#include <iostream>
using namespace std;

int abs() {
	int a;
	cin >> a;
	if (a > 0) {
		cout << a;
	} 
	else if (a < 0){ // like elif in python
		cout << -a;
	}
	else {
		cout << 0;
	}
}
