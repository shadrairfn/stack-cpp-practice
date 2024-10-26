#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    infotype data;
    stack S;

    createStack_103012300012(S);
    for (int i = 1; i <= 11; i++) { // KARENA "PERCAYADIRI" TERDAPAT SEBANYAK 11 HURUF, MAKA PERULANGAN DILAKUKAN SEBANYAK 11 KALI
        cout << "Masukan data ke - " << i << ": ";
        cin >> data;
        push_103012300012(S, data); // MEMASUKAN INPUT DATA KE DALAM STACK
        cout << endl;
        cout << "Data setelah input ke - " << i << " : ";
        printInfo_103012300012(S); // PRINT DATA SETIAP KALI SELESAI MELAKUKAN INPUT
    }
    cout << "Output keseluruhan : "; // PRINT STACK
    printInfo_103012300012(S);
    cout << "Output bagian : ";
    for (int j = 1; j <= 11; j++) {
        char p = pop_103012300012(S);
        if (j > 7) { // KARENA "DIRI" MERUPAKAN DATA KE 8 SAMPAI 11, MAKA DARI ITU BUAT SYARAT > 7.
            cout << p << " "; // PRINT CHAR
        }
    }
    return 0;
}
