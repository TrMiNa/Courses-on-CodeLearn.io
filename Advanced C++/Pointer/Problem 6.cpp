#include <iostream>
#include <cstring>
using namespace std;

void toUpper(string& str) {
    for(int i=0;i<str.length();i++)
		if(str[i]>='a'&&str[i]<='z')
			str[i]-=32;
}

int main() {
	string s;
	cin >> s;
	toUpper(s);
	cout << s;
	return 0;
}