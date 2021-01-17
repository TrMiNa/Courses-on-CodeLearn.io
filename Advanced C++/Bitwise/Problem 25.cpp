#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if( 1 & (a>>3))
		a = a - (1<<3);
	cout << a;
	return 0;
}