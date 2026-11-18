#include <bits/stdc++.h>

main() {
    int a = 10, b = 20;
    int *p = &a , *q = &b;
    *p = *q;
    std::cout << *p <<' '<< *q << std::endl;
    std::cout << a <<' '<< b << std::endl;
    std::cout << (p == &a) <<' '<< (p == &b) << std::endl;
}


