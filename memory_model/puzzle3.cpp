#include <iostream>
using namespace std;

int main() {
    int *p, *q;
    p= new int;
    q = p;
    *q = 8;
    cout << *p << endl;

    q = new int;
    *q = 9;
    cout << *p << endl;
    cout << *q << endl;
    return 0;
}
