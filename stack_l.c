#include "stack_l.h"
#include <stdlib.h>

#define EmptyTOS ( -1 )
#define MinStackSize ( 5 )

struct StackRecord{
    int capacity;
    int TopOfStack;
    Elem *Array;
}

int flag = -1;

Stack CreateStack( int MaxElem ){
    StackRecord stack[MaxElem];
    Stack S = stack;
    return S;
}

int IsEmpty( Stack S ){
    return flag == -1;
}

int IsFull( Stack S ){
    return flag == 
}
