#include <iostream>
using namespace std;
int main() {
    int *x = new int;
    int &y = *x; // & alias the dereference value of x
    y = 4;
    cout << "&x = " << &x << endl;
    cout << "x = " << x << endl;
    cout << "*x = " << *x << endl;

    cout << "&y = " << &y << endl;
    cout << "y = " <<y << endl;
    //cout << *y << endl;

    return 0;


}
