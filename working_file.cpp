#include <iostream>

int add(int x, int y) {
    // Adds integers x and y together.
    return x + y;
}

int multiply(int x,int y) {
    return x * y;
}

int main() {
    int x = 2;
    int y = 5;
    //std::cout << multiply(add(2,1),add(x,y));
    std::cout << sizeof(x) << std::endl;
    int z = (1,2); //interesting result due to comma operator
    //gives a warning when compiled with g++
    std::cout << z << std::endl;
    return 0;
}
