//
// Created by marko on 04.05.19..
//

#include "Streaming.h"

Streaming::Streaming(){

}

bool Streaming::returnSomething(){
    return m_True;
}

bool Streaming::returnSecondStatement() {
    return m_True2;
}

void Streaming::stringSearch(string test2, string name3, string pass3) {
    istringstream iss(test2);
    vector<string> results(istream_iterator<string>{iss}, istream_iterator<string>());
    if (results[0] == name3 && results[1] == pass3) {
        cout << "Found your account\n";
    }
}

void Streaming::writeToText(string name, string pass) {
    ofstream output;
    output.open(m_text, ios::app);
    output << name << " " << pass << "\n";
    output.close();
}

void Streaming::readText(string name, string pass) {
    ifstream input;
    input.open(m_text);
    if(input){
        string test;
        string name2 = name;
        string pass2 = pass;
        while(input) {
            getline(input, test);
            stringSearch(test, name2, pass2);
        }
    }
}

Streaming::~Streaming() {

}