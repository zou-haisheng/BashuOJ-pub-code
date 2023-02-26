#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
char c[128000000];
double f() {
	cin >> c;
	switch (c[0]) {
		case '+': return f() + f();
		case '-': if (c[1] < '0' || c[1] > '9') return f() - f();
					else return atof(c);
		case '*': return f() * f();
		case '/': return f() / f();
		default: return atof(c);
	}
}
int main() {
	cout << fixed << setprecision(6) << f(); 
	return 0;
}