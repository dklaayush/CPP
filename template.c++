#include <iostream>


template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swapValues(x, y);
    std::cout << "After swap:  x = " << x << ", y = " << y << "\n\n";


    double p = 1.5, q = 4.2;
    std::cout << "Before swap: p = " << p << ", q = " << q << "\n";
    swapValues(p, q);
    std::cout << "After swap:  p = " << p << ", q = " << q << "\n";

    return 0;
}