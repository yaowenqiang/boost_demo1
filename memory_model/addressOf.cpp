#include <iostream>

void foo() {
    int x = 42;
    std::cout << "x in foo(): " << x << std::endl;
    std::cout << "&x in foo     : " << &x << std::endl;

    int num = 7;
    int *p = &num;
    std::cout << " p: "  << p << std::endl;
    std::cout << " &p: " << &p << std::endl;
    std::cout << " *p: "  << *p << std::endl;

    *p = 42;

    std::cout << "*p changed to 42"  <<  std::endl;
    std::cout << "num: "  <<  num << std::endl;


}

int main() {
    int num = 7;
    std::cout << "num in main(): " << num << std::endl;
    std::cout << "&num in main(): " << &num << std::endl;
    foo();
    return 0;
}
