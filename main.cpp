#include "SFML_GUI.h"
#include "Game.h"
#include "taha_functions.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    sfml_GUI gui;
    Board board;                    // GUI reads this
    bool useGUI = gui.run(board);   // false = user chose console

    if (!useGUI)
    {
        char choice;
        do {
            choice = printMainMenu();
            callFunctions(choice);
        } while (choice != '5');
    }
    return 0;
}