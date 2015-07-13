#include "stack.h"
#include <stdlib.h>

struct Node{
    Elem e;
    PtrToNode Next;
    PtrToNode Pre;
};

int IsEmpty( Stack S ){
    return S->Next == NULL;
}

Stack CreateStack( void ){
    Stack S;
    S = malloc( sizeof( Node ) );
    S->Next = NULL;
    S->Pre = NULL;
    return S;
}

void Push( Elem e, Stack S ){
   PtrToNode top = getTop( S );
   PtrToNode newNode = malloc( sizeof( Node ));
   newNode->Elem = e;
   top->Next = newNode;
   newNode->Pre = top;
   newNode->Next = NULL;
}

PtrToNode getTop( Stack S ){
    PtrToNode top;
    top = S;
    while( top->Next != NULL )
        top = top->Next;
    return top;
}

Elem Top( Stack S ){
    PtrToNode top = getTop( S );
    return top->Elem;
}

void Pop( Stack S ){
    PtrToNode top = getTop( S );
    PtrToNode Pre = top->Pre;
    Pre->Next = NULL;
    free(top);
}

void MakeEmpty( Stack S ){
    PtrToNode Pre = S;
    PtrToNode P = Pre->Next;
    Pre->Next = NULL;
    Pre = P;
    P = P->Next;
    while( Pre->Next != NULL ){
        free( Pre );
        Pre = P;
        P = P->Next;
    }
    Pre = NULL;
}
