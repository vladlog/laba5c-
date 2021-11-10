#include <iostream>
using namespace std;
int main() {
    long long int value;
    cout << "Entor tvoe`` chislo Lebovski: ";
    cin >> value;
    while(value >= 10) {
        int res = 0;
        while (value >= 10) {
            res += value % 10;
            value /=  10;
        }
        value += res;
    }
    cout << " " << value << endl;
}