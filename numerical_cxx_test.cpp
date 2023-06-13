#include <numerical_cxx.hpp>
#include <iostream>

int main(int argc, char **argv) {
    if(argc != 1) {
        std::cout << argv[0] << " takes no arguments.\n";
        return 1;
    }
    numerical_cxx::Numerical_cxx c;
    return c.get_number() != 6;
}
