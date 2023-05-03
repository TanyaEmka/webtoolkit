#include <iostream>

#include "utils.hpp"

int main(int argc, char **argv) {
    return WRun(argc, argv, [](const WEnvironment& env) {
        return std::make_unique<HelloApplication>(env);
    });
}
