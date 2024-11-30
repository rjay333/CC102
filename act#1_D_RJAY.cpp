#include <iostream>
using namespace std;

int main() 
{
    int rows = 8;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
