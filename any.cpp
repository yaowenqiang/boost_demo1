#include <iostream>
#include <vector>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

int main() {
    any m;
    any x {2.0};
    vector<any> y {12, "lift"};
    any z = string("test");
    if (m.empty()) {
        cout << "any type is empty" << endl;
    }
    cout  << "type of m is " << m.type().name() << endl;
    cout  << "type of x is " << x.type().name() << endl;
    cout  << "type of z is " << z.type().name() << endl;

    int b = any_cast<int>(y[0]);
    cout << "The value of b is " << b << endl;

    try {
        int c = any_cast<int>(y[1]);
        cout << "The value of c is " << c << endl;
    }
    catch (const bad_any_cast e) {
        cout << "wrong type" << endl;
    }

    for (any a : y) {
        int* value = any_cast<int>(&a);
        if (value != nullptr) {
            cout << "value is " << *value << endl;
        }

        const char** text = any_cast<const char*>(&a);
        if ( text != nullptr) {
            cout << *text << endl;
        }

    }
}
