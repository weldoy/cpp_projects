#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > 0 && b > 0) { // (&&) - and
		cout << "and" << endl; 
	}
	if (a > 0 || b > 0) { // (||) - or
		cout << "or" << endl;
	}
	if (!(a > 0 || b > 0)) { // (!) - false
		cout << "false" << endl;
	}
}
