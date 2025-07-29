#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isEven(n))
        cout << "Even\n";
    else
        cout << "Odd\n";
    return 0;
}
