#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {
    minVal = a < b ? (a < c ? a : c) : (b < c ? b : c);
    maxVal = a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main() {
    int lo, hi;
    findMinMax(12, 7, 19, lo, hi);

    cout << "Min: " << lo << endl;
    cout << "Max: " << hi << endl;

    return 0;
}