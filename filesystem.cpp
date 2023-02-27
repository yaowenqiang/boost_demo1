#include <boost/filesystem.hpp>

using namespace std;
using namespace boost;
using namespace boost::filesystem;

void check_path(const char* p)
{
    path myPath(p);
    if (exists(myPath)) {

    } else {
        std::cout  << "path " << myPath << "does not exist" << std::endl;
    }
}

int main() {
    check_path("foo");
    getchar();
    return 0;
}
