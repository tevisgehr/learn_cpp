#include <iostream>

void print_A() {
    std::cout << "A" << std::endl;
}

void print_B() {
    std::cout << "B" << std::endl;
}

void print_AB() {
    print_A();
    print_B();
}

int main() {
    print_AB();
    return 0;
}