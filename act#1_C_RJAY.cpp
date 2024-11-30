#include <iostream>

using namespace std;

int main() {

    int n = 8;

    for (int a=1; a<=n; a++) 
	{
		for (int b=n-a; b>0; b--)
		{
			cout << " ";
		}
        for (int c=1; c<=a; c++)
		{
        cout << "#";
        }
		
        cout << endl;
    }

    return 0;
}
