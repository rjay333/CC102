#include <iostream>

using namespace std;

bool isValidSymbol(char symbol) {
    return (symbol == '*' || symbol == '#' || symbol == '^' || symbol == '$' || symbol == '@');
}

bool isValidRow(int row) {
    return row > 0;
}

int main() {
    char symbol[] = {'*', '#', '^', '$', '@'};
    char first, second, third;
    int size = 5;

    cout << "Enter 1st symbol to use (*,^,#,$,@): ";
    cin >> first;

    if (!isValidSymbol(first)) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    for (int i = 0; i < 5; i++) {
        if (symbol[i] == first) {
            for (int j = i; j < 4; j++) {
                symbol[j] = symbol[j + 1];
            }
            break;
        }
    }

    cout << "Enter 2nd symbol to use (";
    for (int i = 0; i < 4; i++) {
        cout << symbol[i] << ",";
    }
    cout << "): ";
    cin >> second;

    if (!isValidSymbol(second)) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    for (int i = 0; i < 4; i++) {
        if (symbol[i] == second) {
            for (int j = i; j < 3; j++) {
                symbol[j] = symbol[j + 1];
            }
            break;
        }
    }

    cout << "Enter 3rd symbol to use (";
    for (int i = 0; i < 3; i++) {
        cout << symbol[i] << ",";
    }
    cout << "): ";
    cin >> third;

    if (!isValidSymbol(third)) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    cout << "You picked: " << first << second << third << endl;

    cout << "Activity F!" << endl;
    for (int i = 0; i < 9; i++) {
        for (int z = 0; z < i; z++) {
            cout << first;
        }
        cout << " ";
        for (int z = 0; z < 9 - i; z++) {
            cout << first;
        }
        cout << endl;
    }
    for (int z = 1; z <= 9; z++) {
        cout << first;
    }
    cout << endl;

    cout << "Activity G!" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            cout << " ";
        }
        for (int j = 0; j < 10; j++) {
            cout << second;
        }
        cout << endl;
    }

    cout << "Activity H!" << endl;
    int r;
    cout << "Enter the rows: ";
    cin >> r;

    if (!isValidRow(r)) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    for (int i = r; i > 0; i--) {
        for (int k = r - i; k >= 1; k--) {
            cout << first;
        }
        cout << second;
        cout << endl;
    }
    for (int i = 1; i <= r; i++) {
        for (int k = r; k > i; k--) {
            cout << first;
        }
        cout << second;
        cout << endl;
    }

    cout << "Activity I!" << endl;
    int n;
    cout << "Enter rows: ";
    cin >> n;

    if (!isValidRow(n)) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    for (int i = n; i > 0; i--) {
        for (int j = 1; j < (n * 2 + 1); j++) {
            cout << " ";
        }
        for (int k = n - i; k >= 1; k--) {
            cout << second;
        }
        cout << third << endl;
    }
    for (int i = 1; i < (n - 2); i++) {
        for (int k = 1; k <= (n * 2); k++) {
            cout << first;
        }
        for (int j = 1; j <= n; j++) {
            cout << second;
        }
        cout << third << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < (n * 2 + 1); j++) {
            cout << " ";
        }
        for (int k = i; k <= n - 1; k++) {
            cout << second;
        }
        cout << third << endl;
    }

    return 0;
}