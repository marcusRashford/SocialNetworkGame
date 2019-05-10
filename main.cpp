#include <iostream>
#include "SocialNetwork.h"
using namespace game;

int main() {

    bool istina = false;

    SocialNetwork socNet;

    while(!istina){

        socNet.screen();
        socNet.input();

        istina = socNet.returnBool();

    }


    return 0;
}