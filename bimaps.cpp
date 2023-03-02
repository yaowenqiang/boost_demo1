#include <iostream>
#include <boost/bimap.hpp>

using namespace std;
using namespace boost;

enum class Color {
    Red,
    Green,
    Blue
};

typedef bimap<Color, string> ColorMapType;

ColorMapType colorTypes;

void bimap_demo() {
    colorTypes.insert(ColorMapType::value_type(Color::Red, "red"));;
    Color c = colorTypes.right.at("red");

    string s = colorTypes.left.at(Color::Red);
}

int main() {
    bimap_demo();
    //auto c = Color::rRed;
    //cout << c << endl;
}
