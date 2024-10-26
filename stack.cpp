#include "stack.h"
#include <iostream>

using namespace std;

void createStack_103012300012(stack &S) {
    Top(S) = 0;
}

bool isEmpty_103012300012(stack S) {
    if (Top(S) == 0) {
        return true;
    }

    return false;
}

bool isFull_103012300012(stack S) {
    if (Top(S) == 15) {
        return true;
    }

    return false;
}

void push_103012300012(stack &S, infotype data) {
    if (isFull_103012300012(S) == false) {
        Top(S) += 1;
        info(S)[Top(S)] = data;
    }
}

char pop_103012300012(stack &S) {
    char x = info(S)[Top(S)];
    Top(S) -= 1;

    return x;
}

void printInfo_103012300012(stack S) {
    for (int i = Top(S); i >= 1; i--) {
        cout << pop_103012300012(S) << " ";
    }
    cout << endl;
}
