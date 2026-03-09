#include <iostream>

using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    void setDimensions(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int volume() {
        return length * width * height;
    }
};

int main() {
    Box b1(10, 20, 30);
    cout << "Initial Volume: " << b1.volume() << endl;

    b1.setDimensions(5, 5, 5);
    cout << "New Volume: " << b1.volume() << endl;

    return 0;
}