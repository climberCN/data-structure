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
   PtrToNode p = getTop( S );
   PtrToNode new = malloc( sizeof( Node ));
   new->Elem = e;
   p->Next = new;
   new->Pre = p;
   new->Next = NULL;
}

PtrToNode getTop( Stack S ){
    PtrToNode p;
    p = S;
    while( p->Next != NULL )
        p = p->Next;
    return p;
}
