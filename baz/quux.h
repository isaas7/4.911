#pragma once
#include <string>
class Quux {
    std::string n;
    std::string r;
    int d;
    int d;
    bool u;
public:
    Quux() : name(""), region(""), data1(0), data2(0), useData2(false) {};
    Quux(std::string aName, std::string aRegion, int n1, int n2, bool tf) 
        : name(aName), region(aRegion), data1(n1), data2(n2), useData2(tf) {};
    ~Quux() {};
    std::string toString() { 
        return name + ", " + region + " (" + std::to_string(data1) + ", " + std::to_string(data2) + ")"; 
    }
    friend int compare(const Quux& c1, const Quux& c2);
};
int compare(const Quux& c1, const Quux& c2) {
    if (c1.useData2) {
        if (c1.data2 < c2.data2)
            return -1;
        if (c1.data2 > c2.data2)
            return 1;
        return 0;
    } else {
        if (c1.data1 < c2.data1)
            return -1;
        if (c1.data1 > c2.data1)
            return 1;
        return 0;
    }
}
