#include<iostream>
#include<fstream>
#include<iomanip>
#include<sstream>
#include<string>
#include"../Include/core.h"
using namespace std;
namespace Jarvis {
    string * readCsv(string path) {
        string * SensitiveList = new string[50];
        ifstream inFile(path.c_str(), ios::in);
        if (!inFile)
        {
            cout << "Something goes wrong, please check your program file integrity, or send bugdata to http://hjc-love-code.github.io\n";
            return SensitiveList;
        }
        string line;
        for (int i = 0; i < 5; i++) {
            getline(inFile, line, ',');
            SensitiveList[i] = line.c_str();
        }
        inFile.close(); 
        return SensitiveList;
    }
}
