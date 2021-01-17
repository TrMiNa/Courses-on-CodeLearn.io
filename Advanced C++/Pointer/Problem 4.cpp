#include <iostream>

using namespace std;

void change(int& x) {
    x++;
}

int main() {
    int a;
    cin >> a;
    change(a);
    cout << "New value of a: " << a;
    return 0;
}
