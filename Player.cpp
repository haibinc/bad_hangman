//
// Created by Haibin Cao on 1/19/23.
//

#include "Player.h"

Player::Player()
{

}

Player::Player(const std::string& playerName)
{

}

void Player::setName(const std::string& playerName)
{
    this->playerName = playerName;
}

Visuals& Player::getBoard()
{
    return visuals;
}

void Player::setBoard(Visuals visuals)
{
    this->visuals = visuals;
}

void Player::setAccuracy(Accuracy accuracy)
{
    this->accuracy = accuracy;
}

Accuracy& Player::getAccuracy()
{
    return accuracy;
}

Word& Player::getAnswer()
{
    return answer;
}

UserInput& Player::getUserInput()
{
    return input;
}

const std::string& Player::getName()
{
    return playerName;
}

void Player::setAnswer(Word answer)
{
    this->answer = answer;
}

std::ostream& operator<<(std::ostream& out, const Player& player)
{
    out << player.playerName;
    return out;
}