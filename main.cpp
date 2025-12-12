#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡴⠲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣷⡄⠈⢢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⠀⠀⠀⠀⠀⠀⢀⣾⡀⠀⠀⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡓⠦⢄⣀⠀⠀⡼⠻⠿⢶⡄⠀⠀⠀⠘⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⡤⠤⠤⣤⣤⣴⣶⣶⠶⠶⠶⠒⠒⠂⠙⠀⠀⠀⠉⠉⠓⠲⢤⣀⠀⠀⠀⠀⠀⢹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠈⢿⠈⠳⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠢⣄⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠈⡇⠀⠀⠀⠀⠀⢀⣿⡋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣟⠁⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⢈⡽⠁⠀⠀⠠⡄⠀⠀⠀⠀⠀⠀⠀⣄⠀⠀⠀⠀⠀⠀⠘⡆⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⡀⠀⠀⣠⠞⠀⠀⠀⠀⣠⢧⠀⠀⠀⠀⠀⠀⠀⠘⣆⠀⠀⠀⠀⠀⠀⢹⠀⣸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢆⡴⠃⠀⠀⠀⢠⠞⠁⠈⢣⡀⣄⠀⠀⠀⠀⠀⠘⣆⠀⠀⠀⠀⠀⢸⣠⡇⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢞⣓⣸⠀⢠⠰⣋⣀⣀⣳⢤⡙⢾⣟⠲⢤⣀⣠⠄⢯⠳⡀⠀⠀⠀⠸⠋⡇⠀⠀⠀⠀⠀⠀⢠⠏⠹⡄⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⣿⠀⢸⢰⠋⠀⣸⣿⣿⡆⠀⠈⠃⢤⣯⣿⡶⠾⣄⠘⡦⠀⠀⢀⣦⣿⠀⠀⠀⠀⠀⢠⠃⠀⠀⢳⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡄⢸⣼⣀⡀⠣⠽⠿⢃⠀⠀⠀⢾⣻⣿⡿⠀⣸⡸⠁⠀⢀⡼⡼⠉⠳⣄⠀⠀⣰⠃⠀⠀⠀⢸⠇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠟⣷⡘⣿⣛⡁⠀⠀⠀⠀⠁⠀⠀⠀⠉⠍⠡⣶⡿⠁⠀⣠⠟⣇⡇⠀⠀⠈⢦⣰⠁⠀⠀⠀⠀⢸⠂
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠖⢻⣣⣈⣿⣤⠤⢒⠒⠦⠖⠢⠴⢄⣀⢬⣷⠞⢁⣠⠞⣡⠞⢹⡟⠀⠀⠀⠀⠃⠀⠀⠀⠀⢀⡞⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢏⣻⡶⠞⠉⠛⢉⣆⣴⡞⠻⠦⣾⢿⣊⣉⡴⣶⠁⠀⠀⠑⢄⡀⢀⢰⠋⢦⠀⠀⣠⠞⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⣿⣤⣶⣦⠀⠀⡇⠀⠀⣤⣄⠹⡟⠛⢷⠀⠁⠀⠀⠀⠀⠀⠙⠺⣏⣀⠈⢷⠚⠁⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢿⣿⣿⣝⢿⡇⠀⣧⢠⣾⣿⣿⣿⡿⡄⢸⡄⠀⠀⠀⠀⠀⠀⠀⢸⠏⠉⠁⠈⡆⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡟⠀⠀⠀⠙⠃⠀⢸⣿⠈⠱⠟⠛⠛⠃⢹⢸⣿⡄⠀⠀⠀⣤⡀⢀⡿⠛⠓⠂⢀⢱⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣸⡀⠀⠀⠀⠀⠀⣠⢟⣸⠦⣄⣀⠀⠀⠀⠘⣸⠹⣟⡆⠀⡼⠁⠙⣾⣷⣦⣄⠀⠀⢸⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠉⠀⠘⡇⠀⣀⣀⡠⠞⣱⠋⠀⠀⠀⠈⠙⢦⡀⠀⢹⡚⠉⠀⢰⠃⠀⠀⠘⣆⠀⠉⠀⠀⢸⡇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣜⠁⠀⠀⠀⠀⠙⠉⢹⣿⠁⢰⠃⠀⠀⠀⠀⠀⠀⠀⠑⣦⣬⠇⠀⢀⡏⠀⠀⠀⠀⠉⠀⠀⠀⢀⢸⡇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⡠⠟⠛⠛⠷⠂⠀⠀⠀⠀⠈⣿⢠⡇⣠⣤⣤⣤⣀⠀⠀⠀⠀⠘⣿⣶⣶⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⡞⢸⠃⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣾⣷⣤⣤⠀⠀⠀⠀⠀⠀⠀⠀⠛⡼⢉⢉⣉⣉⠛⠻⢷⣄⠀⠀⠀⣸⣯⠙⢿⣧⠀⠀⠀⠀⠀⠀⢀⡼⠁⡼⠀⠀⠀⠀
⠀⠀⠀⠀⡰⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡤⠀⡗⠛⠛⠻⠿⣷⣦⣀⠀⠀⠀⠀⠘⢻⠀⠀⠙⠃⠀⠀⠀⠀⡠⠊⠀⢠⠃⠀⠀⠀⠀
⠀⣠⣖⣟⣳⣒⣆⠀⠀⠀⠀⠀⠀⠀⠀⣠⣎⠀⢸⠁⠀⠀⠀⠀⠀⠉⠉⠀⢸⠀⠀⠀⣏⠀⠀⠀⠀⠀⠠⠒⠋⠀⠀⢠⠏⠀⠀⠀⠀⠀
⠰⣿⣿⣶⠿⠷⣾⠃⠀⠀⠀⠀⢀⡠⠚⠁⠈⠦⡞⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⠀⡼⠉⠁⠀⠀⠀⠀⠀⠀⠀⣠⠔⠋⠀⠀⠀⠀⠀⠀
⠀⠹⣦⣓⡒⠋⠉⠀⠀⠀⣀⡴⠋⠀⠀⠀⠀⡼⠁⡀⠀⠀⠀⠀⠀⠀⣠⠏⢀⣠⢾⣁⣀⣀⣀⣀⣠⠤⠒⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠹⣦⣿⣯⣿⣷⣦⢀⡴⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/

// took me 2 hours, 19 minutes, and 52 seconds to code this

int main() {
    int userDeckSize = 0;
    int lowestValueAllowed = 2;
    int howManyPlayers = 0;
    int enteredCount = 0; 
    int stillLeft = 0;

    bool cardMatrix[13][4];        
    for (int i = 0; i < 13; i++) { 
        for (int j = 0; j < 4; j++) {
            cardMatrix[i][j] = false;
        }
    }

    const char* valNames[] = {"2","3","4","5","6","7","8","9","10","V","D","K","T"};
    const char* suitNames[] = {"piki","trefi","chervi","bubni"};

    cout << "deck size? (24, 36, 52): ";
    cin >> userDeckSize;

    if (userDeckSize == 24) {
        lowestValueAllowed = 9;
    } else if (userDeckSize == 36) {
        lowestValueAllowed = 6;
    } else if (userDeckSize == 52) {
        lowestValueAllowed = 2;
    } else {
        cout << "invalid deck size\n";
        cout << "bye!\n";
        return 1;
    }

    for (int v = lowestValueAllowed; v <= 14; v++) {
        for (int s = 0; s < 4; s++) {
            cardMatrix[v - 2][s] = true;
        }
    }

    cout << "number of players: ";
    cin >> howManyPlayers;

    if (howManyPlayers < 0) {
        cout << "invalid\n";
        return 1;
    }

    cout << "\nenter cards:\n";

    while (true) {
        int tempVal = 0;
        cout << "value (2..14; 11 valet, 12 dama, 13 karol, 14 tuz, 0 end): ";
        cin >> tempVal;

        if (tempVal == 0) {
            if (enteredCount == 0) {
                cout << "no cards entered, continue? (y/n): ";
                char cont;
                cin >> cont;
                if (tolower(cont) == 'n') {
                    return 0;
                }
            }
            break;
        }

        if (tempVal < lowestValueAllowed || tempVal > 14) {
            cout << "invalid value\n";
            continue;
        }

        int tempSuit = 0;
        cout << "suit (1 piki, 2 trefi, 3 chervi, 4 bubni): ";
        cin >> tempSuit;

        if (tempSuit < 1 || tempSuit > 4) {
            cout << "invalid suit, must be 1-4\n";
            continue;
        }

        if (!cardMatrix[tempVal - 2][tempSuit - 1]) {
            cout << "already out\n";
            continue;
        }

        cardMatrix[tempVal - 2][tempSuit - 1] = false;
        enteredCount++;
}

    for (int v = lowestValueAllowed - 2; v < 13; v++) {
        for (int s = 0; s < 4; s++) {
            if (cardMatrix[v][s]) {
                stillLeft++;
            }
        }
    }

    cout << "remaining cards: " << stillLeft << "\n";
    
    for (int s = 0; s < 4; s++) {
        bool somethingInThisSuit = false;
        for (int v = lowestValueAllowed - 2; v < 13; v++) {
            if (cardMatrix[v][s]) {
                somethingInThisSuit = true;
                break;
            }
        }
        if (somethingInThisSuit) {
            cout << suitNames[s] << ":\n";
            for (int v = lowestValueAllowed - 2; v < 13; v++) {
                if (cardMatrix[v][s]) {
                    cout << "  " << valNames[v] << "\n";
                }
            }
        cout << "\n";
        }
    }

    cout << "\ncards that are still in deck:\n";
    for (int v = lowestValueAllowed - 2; v < 13; v++) {
        for (int s = 0; s < 4; s++) {
            if (cardMatrix[v][s]) {
                cout << valNames[v] << " " << suitNames[s] << "\n";
            }
        }
    }

    cin.ignore();
    cin.get();
    return 0;
}