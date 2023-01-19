//
// Created by Dave R. Smith on 1/10/23.
//

#include "Hangman.h"

Hangman::Hangman():wordbank("words.txt")
{
}

void Hangman::mainMenu()
{
    std::cout << "How many players do you want (choose between 1 or 2): " << std::endl;
    std::cin >> numPlayers;
    while(numPlayers <= 0 || numPlayers > 2)
    {
        std::cout << "Please" << std::endl;
        std::cin >> numPlayers;
    }

    switch(numPlayers)
    {
        case 0:
            break;
        case 1:
            run();
            break;
        case 2:
            run();
            break;
        default:
            break;
    }
}

void Hangman::run()
{
    std::vector<Player*> playerList;
    char guess;
    std::string name;

    for (int i = 0; i < numPlayers; ++i)
    {
        Player* player = new Player();
        playerList.push_back(player);
    }

    for (int i = 0; i < numPlayers; ++i)
    {
        std::cout << "Player " << i+1 << " choose your name: " << std::endl;
        std::cin >> name;
        playerList[i]->setName(name);
    }

    try
    {
        for (int i = 0; i < numPlayers; ++i)
        {
            playerList[i]->setAnswer(wordbank.getWord());
        }
    }
    catch (NoWordException e)
    {
        for (int i = 0; i < numPlayers; ++i)
        {
            playerList[i]->getAnswer().setString("Test");
        }
    }

    bool solved = false;
    int incorrect = 0;

    while(incorrect < 7 && !solved)
        {
            for (int i = 0; i < numPlayers; ++i)
            {
                std::cout << "Player " << playerList[i]->getName() << "'s board " << std::endl;
                std::cout << playerList[i]->getBoard();
                std::cout << playerList[i]->getAnswer() << std::endl;
                std::cout << playerList[i]->getAccuracy();
                std::cout << "Player " << playerList[i]->getName();
                guess = playerList[i]->getUserInput().getInput();
                if(playerList[i]->getAnswer().contains(guess))
                {
                    std::cout << "Letter " << guess << " was correct" << std::endl;
                    playerList[i]->getAnswer().replaceDash(guess);
                    std::cout << "Player " << playerList[i]->getName() << "'s board " << std::endl;
                    std::cout << playerList[i]->getBoard();
                    std::cout << playerList[i]->getAnswer();
                    std::cout << playerList[i]->getAccuracy() << std::endl;
                }
                else
                {
                    incorrect += 1;
                    std::cout << "Letter " << guess << " was incorrect" << std::endl;
                    playerList[i]->getBoard().updateBoard(incorrect);
                    playerList[i]->getAccuracy().pushback(guess);
                    std::cout << "Player " << playerList[i]->getName() << "'s board " << std::endl;
                    std::cout << playerList[i]->getBoard();
                    std::cout << playerList[i]->getAnswer();
                    std::cout << playerList[i]->getAccuracy() << std::endl;
                }
            }
            for (int i = 0; i < numPlayers; ++i)
            {
                if(playerList[i]->getAnswer().isSolved())
                {
                    solved = true;
                    std::cout << playerList[i]->getName() << " won";
                }
            }
        }
}