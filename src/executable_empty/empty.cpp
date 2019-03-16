#include "src/library_sample/sample.hpp"
#include <iostream>

using namespace std;

int main()
{
    cout << "Tutorial Empty CPP with CMake, v" << EMPTY_VERSION_MAJOR << "." << EMPTY_VERSION_MINOR << endl;
    string name_lib = ::get_name();
    cout << "Name from library: '" << name_lib << "'" << endl;
}
