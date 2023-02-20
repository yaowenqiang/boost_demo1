#include <iostream>
#include <boost/array.hpp>
#include <boost/program_options.hpp>
using namespace std;
using namespace boost;
namespace po = boost::program_options;
int main(int argc, char* argv[]) {
    po::options_description desc("Program options");
    desc.add_options()
            ("help", "print info");
    po::variables_map vm;
    auto parsed = po::parse_command_line(argc, argv, desc);
    std::cout << "Hello, World!" << std::endl;

    po::store(parsed, vm);
    po::notify(vm);
    if(vm.count("help")) {
        cout << desc << endl;
        getchar();
        return 1;
    }

    boost::array<string, 10>  arr;
    cout << arr.size() << endl;



    return 0;
}
