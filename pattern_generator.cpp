#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Multiplication Table" << endl;
    cout << "2. Star Pattern" << endl;
    cout << "3. Custom Number Pyramid" << endl << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        int size;
        cout << "Enter the table size (1-12): ";
        cin >> size;

        // Stop if the size is not valid
        if (size < 1 || size > 12) {
            cout << "Invalid size. Please run the program again." << endl;
            return 1;
        }

        cout << endl;

        // Outer loop = rows, inner loop = columns
        for (int row = 1; row <= size; row++) {
            for (int col = 1; col <= size; col++) {
                cout << setw(4) << row * col;
            }
            cout << endl;
        }
    } else if (choice == 2) {
        // Outer loop = rows, inner loop = stars in that row
        for (int row = 1; row <= 5; row++) {
            for (int star = 1; star <= row; star++) {
                cout << "* ";
            }
            cout << endl;
        }
    } else if (choice == 3) {
        int rows;
        cout << "Enter the number of rows (1-9): ";
        cin >> rows;

        // Stop if the number of rows is not valid
        if (rows < 1 || rows > 9) {
            cout << "Invalid number of rows. Please run the program again." << endl;
            return 1;
        }

        cout << endl;

        // Extra credit: custom-sized pyramid based on user input
        for (int row = 1; row <= rows; row++) {
            // Print spaces first so the numbers line up in a pyramid
            for (int space = 1; space <= rows - row; space++) {
                cout << "  ";
            }
            // Print the numbers 1 up to the current row number
            for (int num = 1; num <= row; num++) {
                cout << num << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Invalid choice. Please run the program again." << endl;
        return 1;
    }

    return 0;
}
