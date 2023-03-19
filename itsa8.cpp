#include <iostream>  
using namespace std;
int main()
{
    int a, b;
    while (cin >> a) {
        for (b = 2; b < a; b++) {
            if (a % b == 0) {
                cout << "NO" << endl;
                break;
            }
        }
        if (a == b) {
            cout << "YES" << endl;
        }
    }
    return 0;
}