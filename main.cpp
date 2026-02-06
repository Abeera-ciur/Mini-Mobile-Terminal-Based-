#include <iostream>
#include <windows.h>
#include "header_files/hangman.h"
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int choice;

    while (true) {
        cout << "\n===== MINI MOBILE =====\n";
        cout << "1. Hangman 🎮\n";
        cout << "2. Exit ❌\n";
        cout << "Choose: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            hangman_game();   // 🔥 JUMPS INTO games/hangman.cpp
        }
        else if (choice == 2) {
            cout << "Bye 👋\n";
            break;
        }
        else {
            cout << "Invalid choice 😒\n";
        }
    }

    return 0;
}
