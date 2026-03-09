#include <iostream>

using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    swapByValue(x, y);
    cout << "After Value Swap: " << x << " " << y << endl;

    swapByAddress(&x, &y);
    cout << "After Address Swap: " << x << " " << y << endl;

    swapByReference(x, y);
    cout << "After Reference Swap: " << x << " " << y << endl;

    return 0;
}