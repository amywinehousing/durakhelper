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
        cout << "[?] Enter the card value (2-13, 0 to finish): ";
        cin >> tempValue;
        if (tempValue == 0) {
            cout << endl;
            break;
        }
        cout << endl;
        cout << "[?] Enter the card suit (1-4): ";
        cin >> tempSuit;
        cout << endl;
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
