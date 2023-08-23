#include <iostream>
#include "../src/cxxpretty.hpp"
using namespace std;

// Main point of entry
// for the C++ compiler.
int main() {
    printColored("Hello World!", Color::Red);
    printColored("Hello World!", Color::Blue);
    printColored("Hello World!", Color::Green);
    printColored("Hello World!", Color::Cyan);
    printColored("Hello World!", Color::Magenta);
    printColored("Hello World!", Color::Yellow);
    return 0;
}