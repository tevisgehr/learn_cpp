#include <iostream>

int add(int x, int y) {
    // Adds integers x and y together.
    return x + y;
}

int main() {
    int x = 2;
    int y = 5;
    std::cout << add(x,y);
    return 0;
}