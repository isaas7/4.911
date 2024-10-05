#pragma once
class Qux {
public:
    int value;
    Qux() : value(0) {}
    Qux(int n) : value(n) {}    
    friend int compare(const Qux &c1, const Qux &c2);
};
int compare(const Qux &c1, const Qux &c2) {
    if (c1.value < c2.value)
        return -1;
    if (c1.value > c2.value)
        return 1;
    return 0;
}
