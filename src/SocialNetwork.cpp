//
// Created by marko on 03.05.19..
//

#include "SocialNetwork.h"

namespace game{

    SocialNetwork::SocialNetwork() {

    }

    bool SocialNetwork::returnBool() {
        return m_Istina;
    }

    void SocialNetwork::goBackToStart(){
        string word;
        cout << "GO BACK TO START MENU (Type y or N) : ";
        cin >> word;
        if(word == "Y" || word == "y" || word == "Yes" || word == "yes" || word == "YES"){
            m_Istina = false;
            cout << "\n";
        }
        else{
            m_Istina = true;
        }
    }

    void SocialNetwork::input(){
        cout << "Type in your selection : ";
        cin >> m_input;
        if(m_input <= 0 || m_input > 4){
            cout << "You've inputted wrong value and will now exit the game ...\n";
            exitGame();
        }
        else{
            switch(m_input){
                case 1:
                    makeAcc();
                    break;
                case 2:
                    searchAcc();
                    goBackToStart();
                    break;
                case 3:
                    delAcc();
                    goBackToStart();
                    break;
                case 4:
                    exitGame();
                    break;
            }
        }
    }

    void SocialNetwork::makeAcc(){

        string m_text;
        string m_pass;

        cout << "Type in your username : ";
        cin >> m_text;

        cout << "Type in your password : ";
        cin >> m_pass;

        streaming.writeToText(m_text, m_pass);

        cout << "Account created\n";

        goBackToStart();

    }

    void SocialNetwork::searchAcc(){

        string m_text;
        string m_pass;

        cout << "Input your username : ";
        cin >> m_text;

        cout << "Input your password : ";
        cin >> m_pass;

        streaming.readText(m_text, m_pass);


    }

    void SocialNetwork::delAcc(){

        string m_text;
        string m_pass;

        cout << "Input your username : ";
        cin >> m_text;

        cout << "Input your password : ";
        cin >> m_pass;



    }

    void SocialNetwork::exitGame() {
        cout << "Exiting game ...\n";
        m_Istina = true;
    }

    void SocialNetwork::screen(){
        for(int i = 0; i < 15; ++i){
            for(int j = 0; j < 60; ++j){
                if(i == 0 || i == 14){
                    cout << "#";
                }
                else if(i == 1 && j == 1){
                    cout << "#                *** SOCIAL NETWORK GAME ***               #";
                }
                else if(i == 4 && j == 1){
                    cout << "#                  [1.] MAKE AN ACCOUNT                    #";
                }
                else if(i == 6 && j == 1){
                    cout << "#               [2.] SEARCH FOR AN ACCOUNT                 #";
                }
                else if(i == 8 && j == 1){
                    cout << "#                 [3.] DELETE AN ACCOUNT                   #";
                }
                else if(i == 10 && j == 1){
                    cout << "#                   [4.] EXIT THE GAME                     #";
                }
                else if(i == 13 && j == 1){
                    cout << "#                *** SOCIAL NETWORK GAME ***               #";
                }
                else{
                    if(j == 1){
                        cout << "#                                                          #";
                    }
                }
            }
            cout << "\n";
        }
    }

    SocialNetwork::~SocialNetwork() {

    }

}