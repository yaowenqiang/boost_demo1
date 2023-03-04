#include <boost/filesystem.hpp>
#include <iostream>
using namespace boost;
using namespace std;
using namespace boost::filesystem;

void dir_nav(path& dir) {
    directory_iterator end;
    for (directory_iterator i(dir); i != end; i++) {
        path p = i->path();
        if (is_regular(p)) {
            cout << p.filename() << endl;
        }

    }
}

void check_path(const char* p)
{
    path myPath(p);
    if (exists(myPath)) {
        if(is_regular_file(myPath)) {
            cout << "path " << myPath.filename().replace_extension()  << " is a regular file of size " << file_size(myPath) << endl;
        } else if (is_directory(myPath)) {
            cout << "path: " << myPath  <<  " is a directory" << endl;
        }
    } else {
        std::cout  << "path " << myPath << "does not exist" << std::endl;
    }
}

int main(int argc, char* argv[]) {
    check_path("foo");
    check_path(argv[0]);

    auto dir = path(argv[0]).parent_path();
    check_path(dir.string().c_str());
    getchar();


    //decomposition

    for (auto& child: dir) {
        cout << child << endl;
    }

    try {
        path p("junk");
        cout << file_size(p) << endl;
    }
    catch (const filesystem_error& e) {
        cout << e.what() << endl;
    }

    auto parent = path(argv[0]).parent_path().parent_path();
    dir_nav(parent);
    return 0;
}
