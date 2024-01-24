#include <iostream>

int main() {
    // Declare and assign values to variables
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;
    int var4 = 40;
    int var5 = 50;

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
