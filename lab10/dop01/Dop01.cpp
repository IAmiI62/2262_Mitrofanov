#include <iostream>

int main() {
    int x[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            std::cout << reinterpret_cast<size_t>(&x[i][j]) << ' ';
        std::cout << std::endl;
    }
    std::cout << reinterpret_cast<size_t>(&x[0][1]) - reinterpret_cast<size_t>(&x[0][0]) << std::endl;
    std::cout << reinterpret_cast<size_t>(&x[1][0]) - reinterpret_cast<size_t>(&x[0][0]) << std::endl;
}
