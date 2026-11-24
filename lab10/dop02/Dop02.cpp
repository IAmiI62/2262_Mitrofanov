#include <iostream>

int main() {
    int x[10][10];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            x[i][j] = i * 10 + j;
    std::cout << x[0][10] << std::endl;
    std::cout << x[0][25] << std::endl;
    std::cout << x[3][-1] << std::endl;
    std::cout << x[-1][0] << std::endl;
    std::cout << x[10][0] << std::endl;
    std::cout << x[0][100] << std::endl;
}
