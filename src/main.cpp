#include <iostream>

#include "foo.h"
#include "bar.h"

int main(const int argc, const char **argv) {
    foo f;
    f.print();

    std::cout << "bar..." << std::endl;

    bar b;
    b.print();

    std::cout << "application shutdown" << std::endl;

    return 0;
}