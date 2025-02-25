#include <iostream>

using namespace std;

void printMenu() {
    cout << "\nMerkleRex Menu:\n";
    cout << "1. Print help\n";
    cout << "2. Print exchange stats\n";
    cout << "3. Place an ask\n";
    cout << "4. Place a bid\n";
    cout << "5. Print wallet\n";
    cout << "6. Continue\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    while (true) {
        printMenu();
        cin >> choice;

        if (cin.fail()) { // Handle invalid input (e.g., non-numeric)
            cin.clear(); // Clear error flag
            cin.ignore(10000, '\n'); // Discard invalid input
            cout << "Invalid input! Please enter a number between 1 and 6.\n";
            continue;
        }

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice! Please enter a number between 1 and 6.\n";
            continue;
        }

        if (choice == 1) {
            cout << "Help: This menu allows you to interact with the MerkleRex application.\n";
        } else if (choice == 2) {
            cout << "Exchange stats: Showing market data...\n";
        } else if (choice == 3) {
            cout << "Placing an ask order...\n";
        } else if (choice == 4) {
            cout << "Placing a bid order...\n";
        } else if (choice == 5) {
            cout << "Wallet: Showing balance and transaction history...\n";
        } else if (choice == 6) {
            cout << "Continuing...\n";
            break; // Exit the loop
        }
    }

    cout << "Exiting MerkleRex application. Goodbye!\n";
    return 0;
}
