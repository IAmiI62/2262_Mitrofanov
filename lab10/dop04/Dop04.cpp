#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char **argv) {

    int mode = argc > 1 ? std::atoi(argv[1]) : 0;

    switch (mode) {
    case 1: {
        int *a = new int[5];
        for (int i = 0; i < 5; i++) a[i] = i;
        std::cout << a[4] << std::endl;
        delete[] a;
        break;
    }
    case 2: {
        std::vector<int> v = {1, 2, 3};
        int *old = &v[0];
        v.push_back(4);
        std::cout << (old == &v[0] ? "на месте" : "перемещён") << std::endl;
        break;
    }
    case 3: {
        int *m = (int*)malloc(3 * sizeof(int));
        int *n = (int*)realloc(m, 100000 * sizeof(int));
        std::cout << (m == n ? "на месте" : "перемещён") << std::endl;
        free(n);
        break;
    }
    case 4: {

        int *p = new int(5);
        std::cout << *p << std::endl;
        break;

    }
    case 5: {

        int *q = new int(1);
        delete q;
        delete q;
        break;
    }
    case 6: {

        int *r = new int(1);
        delete r;
        std::cout << *r << std::endl;
        break;
    }
    case 7: {

        int *s = new int[3];
        s[3] = 1;
        delete[] s;
        break;

    }
    }
}
