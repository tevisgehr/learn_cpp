#include <iostream>
#include <cmath>


bool isEven(int i)
{
    return i % 2 == 0;
}


int main() {
    int x(7);
    int y(4);

    std::cout << "int / int = " << x / y << "\n";
    std::cout << "double / int = " << static_cast<double>(x) / y << "\n";
    std::cout << "int / double = " << x / static_cast<double>(y) << "\n";
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";


    std::cout << pow(2, 0.5) << std::endl;

    std::cin >> x;
    std::cout << isEven(x) << "\n";
    return 0;

}