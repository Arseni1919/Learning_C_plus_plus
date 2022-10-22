#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    return 0;
};