#include <iostream>

int main() {
    // Declare and assign values to double variables
    double var1 = 3.14;
    double var2 = 2.718;
    double var3 = 1.414;
    double var4 = 0.577;
    double var5 = 1.618;

    // Display Memory Map
    std::cout << "Memory Map" << std::endl;
    std::cout << "Name\tAddress\t\tData" << std::endl;
    std::cout << "var1\t" << &var1 << "\t" << var1 << std::endl;
    std::cout << "var2\t" << &var2 << "\t" << var2 << std::endl;
    std::cout << "var3\t" << &var3 << "\t" << var3 << std::endl;
    std::cout << "var4\t" << &var4 << "\t" << var4 << std::endl;
    std::cout << "var5\t" << &var5 << "\t" << var5 << std::endl;

    return 0;
}
