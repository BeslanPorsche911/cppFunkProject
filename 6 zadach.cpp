
#include <iostream>
using namespace std;
void pryam(int a, int b) {
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void fakt(int a1, int b1) {
    for (int i = 1; i <= a1; i++) {
        b1 *= i;
    }
}
void prNum(int a2) {
    for (int i = 1; i <= 9; i++) {
        if (a2 % i == 0);
    }
}
void kubNum(int a3) {
    cout << pow(a3, 3);
}
void maxNum(int a4, int b4) {
    if (a4 > b4)cout << a4;
    else cout << b4;
}
bool num(int a5) {
    if (a5 > 0)return true;
    else return false;
}




int main()
{   
    num(3);
    
}



