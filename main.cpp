#include <iostream>

int main() {
    double sales = 95000;
    const float t1 = .04;
    double s1 = sales * t1;
    double s2 = sales * .02;
    double z = sales - s1 - s2;
    std::cout << z;
    return 0;
};