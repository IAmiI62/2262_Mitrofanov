#include <bits/stdc++.h>

main() {
    int y = 1, x = 2;
    int *p = &y, *q = &x;
    if (p < q)
        std::cout << "Yes";
    else
        std::cout << "No";
}


