//
// Created by marko on 03.05.19..
//

#ifndef C___CODE_SOCIALNETWORK_H
#define C___CODE_SOCIALNETWORK_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iterator>
#include "Streaming.h"

using namespace std;

namespace game{

class SocialNetwork {
private:
    Streaming streaming;
    bool m_Istina = false;
    bool m_True2 = false;
    int m_input;
public:
    SocialNetwork();
    bool returnBool();
    void goBackToStart();
    void makeAcc();
    void delAcc();
    void searchAcc();
    void exitGame();
    void screen();
    void input();
    ~SocialNetwork();
};

}

#endif //C___CODE_SOCIALNETWORK_H
