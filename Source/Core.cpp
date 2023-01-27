#include<iostream>
#include"../Include/core.h"
std::string * sensitiveList = new std::string[50];
std::string keyWordList[50];
namespace Jarvis {
    bool findSensitive(std::string str) {
        sensitiveList = readCsv("Resource/Sensitive.csv");
        for (int i = 0; i < 4; ) {
            std::string now = sensitiveList[i];
            now.erase(std::remove(now.begin(), now.end(), '\n'), now.end());
            if (str.find(now) == std::string::npos) {
                i++;
                continue;
            }
            else {
                //std::cout << sensitiveList[i] << ' ';
                return true;
            }
        }
        return false;
    }
    std::string * findKeyWord(std::string str) {
        std::string * keyList = new std::string[15];
        bool quit = false;
        int index = 0;
        int listIndex = 0;
        for (int i = 0; i < 15; i++) {
            if (str.find(keyWordList[index]) != std::string::npos) {
                keyList[listIndex] = keyWordList[index];
                listIndex++;
            }
        }
        return keyList;
    }
    std::string giveBasicRespons(std::string * AllKey) {
        return "help you";
    }
}