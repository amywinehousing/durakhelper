/*
⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⠀⡟⠀⢸⡀⠀⠈⠻⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠞⠋⠁⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡆⣠⠞⢡⠀⠀⢸⠀
⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⢰⡇⠀⠀⣇⠀⠀⠀⠈⠻⢷⣤⡀⠀⠀⠀⠀⠀⠀⣠⠶⠋⠀⠀⠀⠀⠀⠀⠀⣰⡧⠤⠤⠤⠤⠤⠤⠤⠤⠤⠤⠤⠖⢚⣿⠞⠁⠀⢸⡄⠀⢸⠀
⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⢸⡇⠀⠈⣿⠀⠀⠀⠀⠀⠀⠙⠻⢷⣦⣀⣀⡴⠋⠁⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠉⠀⠀⠀⣾⣇⠀⠈⡆
⠀⠀⠀⠀⠀⠀⢸⠁⠀⠀⢸⡁⠀⠀⢸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠀⠀⠀⠀⢀⣀⠤⠔⠛⠁⣠⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡞⠀⠀⠀⠀⣰⠇⣿⠀⠀⡇
⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀⢸⡇⠀⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⢠⠴⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠀⠀⠀⠀⣠⠏⠀⢿⠀⠀⡇
⠀⠀⠀⠀⠀⠀⢹⠀⠀⠀⠈⣇⠀⠀⠀⢮⡳⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠀⠀⠀⢠⣤⣤⣤⣤⠶⠛⠉⠀⠀⠀⠀⠀⡴⠋⠀⠀⣼⠀⠀⢻
⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⢹⡄⠀⠀⢸⡏⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⠀⠀⠾⠯⠶⢻⠂⠀⠀⠈⠉⠻⠦⣄⣀⠀⠀⠀⠀⡴⢋⣴⠆⠀⠀⣿⠀⠀⣼
⠀⠀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠳⡄⠀⠀⢿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⢀⣀⠀⣀⡞⠀⠀⢀⣀⣀⣀⠀⠀⠉⠉⠛⣲⡾⠟⢹⠃⠀⠀⠀⣿⠀⠀⡟
⠀⠀⠀⠀⠀⠀⠀⢻⡄⠀⠀⠀⠀⠹⡦⠤⠤⠿⠦⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣧⠀⠈⠉⠁⠀⡤⠚⠋⠉⠀⠙⠻⣦⠀⣠⠞⠃⠀⠀⡿⠀⠀⠀⢸⠏⠀⢀⡇
⠀⠀⠀⠀⠀⠀⠀⠀⢷⡀⠀⠀⠀⠀⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡽⠚⠁⠀⠀⠀⢠⡇⢀⣠⣄⡼⠀⠀⡾⠁
⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠈⢳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠲⠤⠤⠤⠖⠒⠚⣩⣽⡿⠀⠀⠀⢀⣠⡾⠓⢉⣟⡾⠃⢀⡼⠁⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣷⡶⠮⣷⣄⠀⠀⠀⠈⠙⠆⠀⠿⠶⣤⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⠿⠋⠁⠀⠀⠀⠀⠈⠀⢀⣴⠟⢋⣠⣶⣋⣀⣀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠈⢳⡀⠀⠈⠳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢷⣦⡑⢄⠀⠀⠀⠀⠀⠀⠀⢰⠂⣠⣶⠟⠋⠀⠀⠀⠀⣀⣀⡀⠀⠀⠋⠉⠀⠉⠁⠀⠀⣠⡾⠋⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⣄⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⣀⣀⣈⡻⣮⣧⠀⠀⠀⠀⠀⠀⣿⣾⣋⣀⣤⣴⣶⠿⠿⠟⠛⠛⠃⠀⠀⠷⢤⣄⣀⣀⣤⣞⣡⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠸⣷⠶⠭⠿⠶⠒⠒⠀⠀⠀⠉⠉⠉⠉⠉⠉⠉⠉⠉⣻⣿⣿⠦⠖⠒⠒⠒⠶⣿⣿⡛⠋⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣩⡿⠛⠁⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⣏⠀⠀⠀⠀⠀⠀⠀⠀⣼⡇⠉⠀⠀⠀⠀⠀⠀⣼⡇⠀⠀⠀⠀⢀⣤⡴⠛⠉⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠳⢦⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠿⠁⠈⠳⣄⣀⡀⢀⣀⣠⠾⠁⠀⠀⠀⠀⠀⠀⣀⣾⠏⠀⠀⢠⣶⢿⣯⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠋⢉⣁⣀⣀⠀⠀⠀⠸⣆⠀⠀⠀⠀⠀⠀⠀⠈⠉⡏⠁⠀⠀⠀⠀⢀⣀⣠⣴⠾⡟⠁⠀⠒⢻⡟⠀⠀⠀⠙⠻⣦⡀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠁⠀⠀⠈⠻⣄⡀⠀⠀⠀⠀⠻⣄⠀⠀⠀⠀⠀⣀⣤⡶⢿⠛⠛⠛⠛⠛⠛⢻⠁⠙⠲⠇⠀⠀⠴⢯⡤⠻⢶⣤⣄⣀⣈⣷⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠸⢿⣥⡀⠀⠀⠀⠀⠸⡞⠛⠒⠂⠀⠀⠀⢯⣻⠶⣶⠶⠟⠋⠁⠀⠘⡆⠀⠀⠀⠀⠀⣼⠀⠀⠀⠀⠀⢀⡴⠊⠁⠀⠈⠙⢮⡉⠉⠛⠁⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠙⠛⠲⢶⡶⠟⠲⠤⡄⠀⠀⠀⠈⠁⠀⠈⣆⠀⠀⠀⠀⠀⠙⠀⠀⠀⠀⣠⠏⠀⠀⠀⠀⠈⠁⢀⣠⣤⠤⠶⠶⠦⢽⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⣀⠀⠀⠀⠀⣀⣠⠞⠁⠀⠀⠀⠀⣀⣴⣞⣉⣀⣀⣀⣀⣴⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣥⡤⢤⣤⣤⢤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠛⠋⠉⠀⠀⠀⢀⣠⠴⠛⠁⠀⠀⠈⠀⠀⣠⠼⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣛⠛⠋⠉⠉⠀⠀⠈⠉⠛⠓⠶⠦⢤⣤⣀⣀⣀⣀⠀⠀⣀⣠⣴⣶⣾⠋⠁⢀⣀⣀⣀⡀⢠⣴⣞⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠦⠽⠗⢲⣤⣶⠶⠚⠛⠳⢶⣦⣄⡀⠀⠻⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣧⡶⠟⠛⠉⠉⠙⠛⢶⣅⠉⠙⠓⠶⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⡄⠀⢀⣿⠋⠀⠀⠀⠀⠀⠀⠀⠙⠿⣶⣄⠈⠙⠛⠻⠟⠛⢫⣵⠾⢋⠏⠀⠀⠀⠀⠀⠀⢠⡏⠙⣷⠀⢠⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣦⣸⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣷⡄⠀⠀⢀⣴⠟⠁⢀⡎⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⠸⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠸⣿⡛⠷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡇⠀⠀⢀⣀⣀⠀⠀⣀⠀⠀⠀⠀⠈⢻⣧⣀⡾⠃⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⡸⠀⠀⠀⠀⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣄⣀⠘⢷⡄⠀⠙⠳⣄⠀⠀⠀⠀⢀⡴⢻⡇⣠⠞⠋⠉⠉⠛⢯⡝⠀⠀⠀⠀⠀⠀⠙⡿⠁⠀⠀⣸⠁⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⣿⠸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠉⠙⠓⢾⣷⡀⠀⠀⠘⢷⠀⢀⡴⠋⢀⣼⡷⠋⠀⠀⠀⠀⠀⠀⠹⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠇⠀⠀⠀⠀⠀⠀⣠⠃⠀⠀⠀⠀⢀⣿⠀⠹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⠉⠀⠀⠀⢸⡾⠋⠀⠀⢸⡟⠁⠀⠀⠀⠀⠀⠀⠀⣀⣯⣤⣄⡀⠀⠀⠀⠀⠀⢀⡇⠀⠀⠀⠀⠀⠀⢰⠏⠀⠀⠀⠀⢀⣼⠋⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣴⠟⠀⢸⠓⢶⠋⢀⠀⠀⠀⠀⠀⣠⡴⠋⠁⠀⠀⠀⠹⣦⢤⡤⠀⠀⡾⠀⠀⠀⠀⢠⢄⣠⠇⠀⠀⠀⠀⢀⣾⠃⠀⠀⠀⠀⢻⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢸⡏⠀⠀⢸⠀⢸⣟⣹⡟⠀⠀⠀⠈⢁⡀⠀⠀⠀⠀⠀⠀⣿⠋⠀⠀⡺⠁⠀⠀⠀⢀⣼⡟⠛⠉⠉⠛⠛⠦⣞⡁⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀

                            12.12.2025 19:13
*/

#include<iostream>
using namespace std;

void debugPrint(int *cardArr[], int cardValueAmount, int cardSuitAmount, int displayIncrement) {
    const char* suitNames[] = {"Spades", "Clubs", "Hearts", "Diamonds"};
    for (int i = 0; i < cardValueAmount; i++) {
        int rank = i + displayIncrement + 1;
        for (int j = 0; j < cardSuitAmount; j++) {
            if (cardArr[i][j] == 0) {
                cout << "[+] ";
                switch (rank) {
                    case 14:
                        cout << "Ace ";
                        break;
                    case 13:
                        cout << "King ";
                        break;
                    case 12:
                        cout << "Queen ";
                        break;
                    case 11:
                        cout << "Jack ";
                        break;
                    default:
                        cout << rank << " ";
                        break;
                }
                cout << suitNames[j] << " still there.\n";
            }
        }
        cout << endl;
    }
}

void deleteLeftOvers(int *cardArr[], int cardValueAmount, int cardSuitAmount) {
    for (int i = 0; i < cardValueAmount; i++) {
        delete[] cardArr[i];
    }
    delete[] cardArr;
}

int main() {
    int deckSize, cardValueAmount, displayIncrement;
    int cardSuitAmount = 4;
    cout << "[?] Enter your desired deck size, it can be 24, 36, or 52: ";
    cin >> deckSize;
    cout << endl;
    switch (deckSize) {
        case 24:
            cardValueAmount = 6;
            displayIncrement = 8;
            break;
        case 36:
            cardValueAmount = 9;
            displayIncrement = 5;
            break;
        case 52:
            cardValueAmount = 13;
            displayIncrement = 1;
            break;
        default:
            cout << "[-] Invalid." << endl;
            cin.ignore();
            cin.get();
            return 1;
    }
    int **cardArr = new int*[cardValueAmount]{};
    for (int i = 0; i < cardValueAmount; i++) {
        cardArr[i] = new int[cardSuitAmount]{};
    }
    for (int i = 0; i < i + 1; i++) {
        int tempValue, tempSuit;
        cout << "[?] Enter the card value (2 - 14, 11 - Jack, 12 - Queen, 13 - King, 14 - Ace, 0 to finish, to remove a card type it in again): ";
        cin >> tempValue;
        if (tempValue == 0) {
            cout << endl;
            break;
        }
        cout << endl;
        cout << "[?] Enter the card suit (1 - Spades, 2 - Clubs, 3 - Hearts, 4 - Diamonds): ";
        cin >> tempSuit;
        cout << endl;
        switch (cardValueAmount) {
            case 6:
                if (tempValue < 9 || tempValue > 14 || tempSuit < 1 || tempSuit > 4) {
                    cout << "[-] Invalid card." << "\n\n";
                }
                if (cardArr[tempValue - 9][tempSuit - 1] == 1) {
                    cout << "[!] Card removed." << "\n\n";
                    cardArr[tempValue - 9][tempSuit - 1] = 0;
                    continue;
                }
                break;
            case 9:
                if (tempValue < 9 || tempValue > 14 || tempSuit < 1 || tempSuit > 4) {
                    cout << "[-] Invalid card." << "\n\n";
                    continue;
                }
                if (cardArr[tempValue - 6][tempSuit - 1] == 1) {
                    cout << "[!] Card removed." << "\n\n";
                    cardArr[tempValue - 6][tempSuit - 1] = 0;
                    continue;
                }
                break;
            case 13:
                if (tempValue < 9 || tempValue > 14 || tempSuit < 1 || tempSuit > 4) {
                    cout << "[-] Invalid card." << "\n\n";
                    continue;
                }
                if (cardArr[tempValue - 2][tempSuit - 1] == 1) {
                    cout << "[!] Card removed." << "\n\n";
                    cardArr[tempValue - 2][tempSuit - 1] = 0;
                    continue;
                }
                break;
        }
        switch (cardValueAmount) {
            case 6:
                cardArr[tempValue - 9][tempSuit - 1] = 1;
                break;
            case 9:
                cardArr[tempValue - 6][tempSuit - 1] = 1;
                break;
            case 13:
                cardArr[tempValue - 2][tempSuit - 1] = 1;
                break;
        }
    }
    debugPrint(cardArr, cardValueAmount, cardSuitAmount, displayIncrement);
    deleteLeftOvers(cardArr, cardValueAmount, cardSuitAmount);
    return 0;
}
