#include <iostream>

#include "my_cc_library/hello.h"

extern "C" void hello() {
    std::cout << "Hello, world." << std::endl;
}
