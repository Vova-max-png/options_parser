#include "options.h"

int main(int argc, char* argv[]) {
    options<std::string, std::string> parse;
    parse.AddOption("-h", "That is test help message");
}