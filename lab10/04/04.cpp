#include <iostream>

int main() {
    unsigned a = 8, b = 3, c = 17;
    unsigned *p = &a;
    unsigned *q = &b;
    auto pr = [&](const char *s) {
        std::cout << s << ": a=" << a << " b=" << b << " c=" << c
                  << " p->" << (p == &a ? 'a' : p == &b ? 'b' : 'c')
                  << " q->" << (q == &a ? 'a' : q == &b ? 'b' : 'c') << std::endl;
    };
    pr("start");
    *p += *q + c; pr("*p += *q + c");
    c = *q; pr("c = *q");
    p = &c; pr("p = &c");
    c += a; pr("c += a");
    *p += 10; pr("*p += 10");
    *q = *p; pr("*q = *p");
    q = p; pr("q = p");
    *q += 10; pr("*q += 10");
}
