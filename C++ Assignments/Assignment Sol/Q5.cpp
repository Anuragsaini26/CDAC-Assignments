#include <iostream>
using namespace std;

void doubleIt(int &n) {
    n = n * 2;
    cout << "Inside doubleIt: " << n << endl;
}

int main() {
    int num = 7;
    doubleIt(num);
    cout << "In main after call: " << num << endl;
    return 0;
}

// Original Output
// Inside doubleIt: 14
// In main after call: 7

// Correct Output
// Inside doubleIt: 14
// In main after call: 14