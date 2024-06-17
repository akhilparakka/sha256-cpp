#include "sha.hpp"
#include <iostream>

int main()
{
    std::string input;
    std::cout << "Enter input for hashing: \n";
    std::getline(std::cin, input);
    std::string hash1 = sha256(input);
    std::cout << "SHA-256(\"" << input << "\") = " << hash1 << std::endl;

    return 0;
}
