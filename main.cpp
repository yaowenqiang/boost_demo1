#include <iostream>
#include <boost/array.hpp>
using namespace std;
using namespace boost;
int main() {
    std::cout << "Hello, World!" << std::endl;

    boost::array<string, 10>  arr;
    cout << arr.size() << endl;

    return 0;
}
