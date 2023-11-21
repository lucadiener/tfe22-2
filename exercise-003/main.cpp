#include <fmt/chrono.h>
#include <fmt/format.h>
#include <iostream>
#include "vectorint.hpp"

auto main(int argc, char **argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, World!\n");

    /* INSERT YOUR CODE HERE */
    VectorInt data(20);
    data.print_vector();
    auto start = std::chrono::system_clock::now();
    data.push_back(20);
    auto end = std::chrono::system_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    fmt::print("Die benötigte Zeit ist:{}\n", elapsed);
    data.print_vector();
    data.resize(14);
    data.print_vector();
    data.at(0);
    data.size();
    
    VectorInt data3(99);
    data3 = data2;
    data3.print_vector();
    return 0; /* exit gracefully*/
}