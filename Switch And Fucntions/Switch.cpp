// Exercise on Switch statement
// Amount given = 1330
// how many notes of 100 , 50 , 20 , 1 required to make the amount


#include <bits/stdc++.h>
using namespace std;

int main() {
    int amount = 1330;
    int notes100 = 0, notes50 = 0, notes20 = 0, notes1 = 0;

    switch (1) {
        case 1:
            notes100 = amount / 100;
            amount %= 100;
            cout << "100 notes: " << notes100 << endl;
        
        case 2:
            notes50 = amount / 50;
            amount %= 50;
            cout << "50 notes: " << notes50 << endl;
        
        case 3:
            notes20 = amount / 20;
            amount %= 20;
            cout << "20 notes: " << notes20 << endl;
        
        case 4:
            notes1 = amount / 1;
            cout << "1 notes: " << notes1 << endl;
    }

    

    return 0;
}