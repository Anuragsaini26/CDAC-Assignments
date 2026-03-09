#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20, z = 30;
    int *px = &x, *py = &y, *pz = &z;

    cout << "Before Swap: " << x << " " << y << " " << z << endl;

    int temp = *px;
    *px = *pz;
    *pz = temp;

    cout << "After Swap: " << x << " " << y << " " << z << endl;

    cout << "Addresses:\n";
    cout << px << " " << py << " " << pz << endl;

    return 0;
}