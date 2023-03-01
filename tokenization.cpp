#include <iostream>
#include <string>
#include <boost/tokenizer.hpp>

using namespace std;

using namespace boost;
void token_demo() {
    string s = "To be or not to be.";
    char_separator<char> sep("o", " ", keep_empty_tokens);
    tokenizer<char_separator<char>> t(s, sep);
    for(string part :  t) {
        cout << "<" << part << ">" << endl;
    }

    int offsets[] = { 2,3,4 };
    offset_separator os(offsets, offsets+3);

    auto start = make_token_iterator<string>(s.begin(), s.end(),  os);
    auto end = make_token_iterator<string>(s.end(), s.end(),  os);

    for(; start != end; ++start) {
        cout << *start << endl;
    }


}

int main(int argc, char* argv[]) {
    token_demo();

}
