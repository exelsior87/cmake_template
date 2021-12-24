#include "foo.h"

#include <iostream>
#include <fmt/core.h>

foo::foo() {
    fmt::print("foo constructor called !!!\n");
}

foo::~foo() {
    fmt::print("foo destructor called !!!\n");
}

void foo::print(void) {
    fmt::print("sizeof foo: {}\n", sizeof(foo));
}
