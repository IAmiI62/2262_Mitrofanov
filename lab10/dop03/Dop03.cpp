#include <iostream>

struct S {
    int a[5];
    int i;
    };

int main() {
    S s;
    for (s.i = 0; s.i <= 5; s.i++) {
        s.a[s.i] = 0;
        std::cout << s.i << std::endl;
    }
}
