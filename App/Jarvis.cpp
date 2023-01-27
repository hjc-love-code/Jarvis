#include<iostream>
#include<regex>
#include"../Include/core.h"

bool vExit = false;
std::string vInput;

int main() {
    printf("%s", "hello! I'm Jarvis, what can I do?\n");
    while (vExit == false) {
        getline(std::cin, vInput);
        std::string shortRespons = Jarvis::giveBasicRespons(Jarvis::findKeyWord(vInput));
        if (Jarvis::findSensitive(vInput)) {
            std::cout << "hey, don't say that word, But I'll still " << shortRespons << ".\n";
        }
    }
    printf("%s", "by by");
}