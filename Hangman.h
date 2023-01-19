//
// Created by Dave R. Smith on 1/10/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H

#include <iostream>
#include "Wordbank.h"
#include "Accuracy.h"
#include "UserInput.h"
#include "Player.h"

class Hangman
{
private:
    Wordbank wordbank; // hold all potential words for the game
    int numPlayers;
public:
    Hangman();
    void run();
    void mainMenu();
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H
