#include <iostream>
#include <boost/array.hpp>
#include <boost/program_options.hpp>
#include <vector>

using namespace std;
using namespace boost;
namespace po = boost::program_options;

int main(int argc, char *argv[]) {
    po::options_description desc("Program options");
    desc.add_options()
            ("help", "print info")
            ("filename", po::value<string>()->default_value("default.txt"), "file to process");
    po::variables_map vm;
    auto parsed = po::parse_command_line(argc, argv, desc);
    std::cout << "Hello, World!" << std::endl;

    po::store(parsed, vm);
    po::notify(vm);
    if (vm.count("help")) {
        cout << desc << endl;
        getchar();
        return 1;
    }

    string filename = "default.txt";
    if (vm.count("filename")) {
        filename = vm["filename"].as<string>();
    }
    cout << "Processing file " << filename << endl;
    boost::array<string, 10> arr;
    cout << arr.size() << endl;


    // customize

    int value;
    po::options_description desc2("my file processor");
    desc2.add_options()
            ("value, v", po::value<int>(&value)->default_value(42),
            "input value")
    ("files", po::value<vector<string>>()->multitoken(),
            "input files");
    po::positional_options_description pos;
    pos.add("files", -1);
    po::command_line_parser parser(argc, argv);
    auto parsed_options = parser.options(desc).positional(pos).run();
    po::store(parsed_options, vm);


    po::variables_map vm2;
    po::store(po::parse_command_line(argc, argv, desc), vm2);
    po::notify(vm2);

    cout << "the value is " << value << endl;

    if(vm.count("files")) {
        init i = 0;
        auto files = vm["files"].as<vector<string>>();
        for(auto s: files) {
            cout << (++i) << ": " << s << endl;
        }
    }


    return 0;
}
