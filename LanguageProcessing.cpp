#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::reverse(sentence.begin(), sentence.end());
    std::cout << "The reversed sentence is: " << sentence << std::endl;
    return 0;
}
