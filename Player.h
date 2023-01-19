//
// Created by Haibin Cao on 1/19/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_PLAYER_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_PLAYER_H
#include <string>
#include "Visuals.h"
#include "Accuracy.h"
#include "Word.h"
#include "UserInput.h"

class Player
{
private:
    std::string playerName;
    Accuracy accuracy; // holds the incorrect
    Visuals visuals; // the board
    Word answer;
    UserInput input;
public:
    Player();
    Player(const std::string& playerName);
    void setName(const std::string& playerName);
    Visuals& getBoard();
    Accuracy& getAccuracy();
    Word& getAnswer();
    UserInput& getUserInput();
    const std::string& getName();
    void setBoard(Visuals visuals);
    void setAccuracy(Accuracy accuracy);
    void setAnswer(Word answer);
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_PLAYER_H
