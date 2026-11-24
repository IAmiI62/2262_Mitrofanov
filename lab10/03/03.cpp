#include <iostream>

int main() {
    int a = 6, b = 7;
    int *p = &a;
    int &r = b;
    int m = *p * r;
    int bits = a & b;
    std::cout << m << ' ' << bits << std::endl;
}
