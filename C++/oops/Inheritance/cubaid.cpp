#include<iostream>
using namespace std;

class ractangle {
private:
    int length, breadth;

public:
    ractangle() {
        length = 1;
        breadth = 1;
    }

    ractangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int getLength() { return length; }
    int getBreadth() { return breadth; }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }

    void disp() {
        cout << "Area : " << area() << "\nParameter : " << perimeter();
    }
};

class cuboid : public ractangle {
private:
    int hight;

public:
    cuboid() : ractangle() {
        hight = 1;
    }

    cuboid(int length, int breadth, int height)
        : ractangle(length, breadth) {
        this->hight = height;
    }

    int volume() {
        return getLength() * getBreadth() * hight;
    }

    void display() {
        cout << "Volume : " << volume();
    }
};

int main() {
    cuboid a(10, 20, 30);
    a.display();
}
