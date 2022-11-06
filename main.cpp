#include <iostream>
#include <vector>
#include <sstream>

//Напишите программу, которая считывает строку и распечатывает её в
//обратной последовательности. Используйте класс vector.

std::string reverseStr(const std::string str)
{
    std::string new_s;
    for (int i = str.length() - 1; i >= 0; --i) {
        new_s += str[i];
    }
    return new_s;
}

int main() {
    std::vector<std::string> stroke;
    std::string stroke_in;

    std::cout << "Enter your stroke: ";
    getline(std::cin, stroke_in);
    std::istringstream ss(stroke_in);

    std::string word;
    while (ss >> word){
        stroke.push_back(word);
    }

    std::cout << "Vector: ";
    for (auto & i : stroke){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout<< "Reversed Vector: ";
    for (int i = stroke.size() - 1; i >= 0; i--) {
        std::cout << reverseStr(stroke[i]) << " ";
    }
    std::cout << std::endl;
    return 0;
}