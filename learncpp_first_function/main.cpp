#include <iostream>

void doPrint() {
    std::cout << "In doPrint()" << std::endl;
}

int return5() {
    std::cout << "return5 function" << std::endl;
    return 5;
}

int get_y() {
    int x;
    std::cout << "getx function. Enter number:" << std::endl;
    std::cin >> x;
    return x;
}

int main() {
    std::cout << "Starting main()" << std::endl;
    doPrint();
    int x = return5();
    std::cout << x << std::endl;

    int y = get_y();
    std::cout << y << std::endl;
    std::cout << "Ending main()" << std::endl;

    return 0;
}