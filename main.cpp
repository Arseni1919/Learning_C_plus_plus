#include <iostream>

int main() {
    int a = 10;
    int b = 3;
    int prev_a = a;
    a = b;
    b = prev_a;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    int z = a % b;
    std::cout << z << std::endl;
    ++z;
    std::cout << z << std::endl;
    // This is comment
    /*
     *
     *
     *
     * */
    return 0;
};