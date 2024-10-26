#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
#define Top(S) (S).Top
#define info(S) (S).info

using namespace std;

typedef char infotype;
struct stack {
    infotype info[15];
    int Top;
};

void createStack_103012300012(stack &S);
bool isEmpty_103012300012(stack S);
bool isFull_103012300012(stack S);
void push_103012300012(stack &S, infotype data);
char pop_103012300012(stack &S);
void printInfo_103012300012(stack S);


#endif // STACK_H_INCLUDED
