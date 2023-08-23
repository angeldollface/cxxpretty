/*
CXX Pretty by Alexander Abraham 
a.k.a. "Angel Dollface".
Licensed under the MIT license.
*/

#ifndef CXXPRETTY_HPP
#define CXXPRETTY_HPP

#include <iostream>
#include <string>
using namespace std;

// An enum to represent
// the supoported color
// variants.
enum Color {
    Red,
    Blue,
    Green,
    Cyan,
    Magenta,
    Yellow
};

// This function attempts to modify a string with an ANSI
// escape sequence to be of the specified color.
string colored(string subject, Color color_variant){
    string prefix = "";
    string suffix = "";
    string result = "";
    if (color_variant == Color::Red) {
        prefix = "\u001b[31m";
        suffix = "\u001b[0m";        
    }
    else if (color_variant == Color::Blue) {
        prefix = "\u001b[34m";
        suffix = "\u001b[0m";  
    }
    else if (color_variant == Color::Green) {
        prefix = "\u001b[32m";
        suffix = "\u001b[0m";  
    }
    else if (color_variant == Color::Cyan) {
        prefix = "\u001b[36m";
        suffix = "\u001b[0m";  
    }
    else if (color_variant == Color::Magenta) {
        prefix = "\u001b[35m";
        suffix = "\u001b[0m";  
    }
    else if (color_variant == Color::Yellow) {
        prefix = "\u001b[33m";
        suffix = "\u001b[0m";  
    }
    else {}
    result = prefix + subject + suffix;
    return result;
}

// Prints out
// the message modified
// to be of the specified color.
void printColored(
    string msg, 
    Color color
){
    string coloredString = colored(msg, color);
    cout << coloredString << endl;
}

#endif