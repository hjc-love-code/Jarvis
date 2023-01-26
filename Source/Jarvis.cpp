#include<iostream>
#include<regex>

bool vExit = false;
std::string vInput;

int main() {
    printf("%s", "hello! I'm Jarvis, what can I do?\n");
    while (vExit == false) {
        getline(std::cin, vInput);
        
        std::cout << vInput  << '\n';
        
    }
    printf("%s", "by by");
}