#pragma once

class Primitive { 
private:
    int a, b;
public:
    Primitive() : a(0), b(0) {}
    Primitive(int _a, int _b) : a(_a), b(_b) {}

    int sum();
    int mult();
};

// int Primitive::sum() {
//     return a + b;
// }
