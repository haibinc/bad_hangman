#include <iostream>
#include "Hangman.h"
#include "Application.h"

int main()
{
    Hangman hangman;
    Application app;
    app.run();
    hangman.mainMenu();
    return 0;
}
