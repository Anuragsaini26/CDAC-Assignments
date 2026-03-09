#include <iostream>

using namespace std;

int main() {
    int val = 10;
    int *ptr = &val;
    int &ref = val;

    *ptr = 20;
    cout << "Value after pointer change: " << val << endl;

    ref = 30;
    cout << "Value after reference change: " << val << endl;

    return 0;
}