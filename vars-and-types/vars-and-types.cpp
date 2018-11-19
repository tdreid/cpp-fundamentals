#include <iostream>

int main () {
    int i1 = 0;
    std::cout << "i1=" << i1 << std::endl;
    int i2 = 1;
    std::cout << "i2=" << i2 << std::endl;
    int i3(2);
    std::cout << "i3=" << i3 << std::endl;
    int i4(3); // { 3 } not enabled by default
    std::cout << "i4=" << i4 << std::endl;    
    
    double d1 = 2.341;
    double d2 = i1;
    
    int i5 = d1;
    
    std::cout << "d1=" << d1 << std::endl;    
    std::cout << "d2=" << d2 << std::endl;    
    std::cout << "i5=" << i5 << std::endl;    
    
    return 0;
}
