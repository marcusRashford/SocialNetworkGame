//
// Created by marko on 04.05.19..
//

#ifndef C___CODE_STREAMING_H
#define C___CODE_STREAMING_H
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <iterator>

using namespace std;

class Streaming {
private:
    bool m_True = false;
    bool m_True2 = false;
    int m_count;
    vector<int> lengths;
    string m_text = "dataStorage.txt";
public:
    Streaming();
    bool returnSomething();
    bool returnSecondStatement();
    void stringSearch(string test2, string name3, string pass3);
    void writeToText(string name, string pass);
    void readText(string name, string pass);
    ~Streaming();
};


#endif //C___CODE_STREAMING_H
