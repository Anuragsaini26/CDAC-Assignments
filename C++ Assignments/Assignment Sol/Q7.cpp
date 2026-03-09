#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.14159f;

float circleArea(float r) {
    return PI * r * r;
}

float circlePerimeter(float r) {
    return 2 * PI * r;
}

int main() {
    float r = 7.0;

    cout << fixed << setprecision(4);
    cout << "Area: " << circleArea(r) << endl;
    cout << "Perimeter: " << circlePerimeter(r) << endl;

    // PI = 3.0f;  // error: assignment of read-only variable 'PI'

    return 0;
}