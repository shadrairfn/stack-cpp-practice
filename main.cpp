#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    infotype data;
    stack S;

    createStack_103012300012(S);
    for (int i = 1; i <= 11; i++) {
        cout << "Masukan data ke - " << i << ": ";
        cin >> data;
        push_103012300012(S, data);
        cout << endl;
        cout << "Data setelah input ke - " << i << " : ";
        printInfo_103012300012(S);
    }
    cout << "Output keseluruhan : ";
    printInfo_103012300012(S);
    cout << "Output bagian : ";
    for (int j = 1; j <= 11; j++) {
        char p = pop_103012300012(S);
        if (j > 7) {
            cout << p << " ";
        }
    }
    return 0;
}
