#include "list.h"

struct Node{
    Elem Element;
    Position Next;
};

int IsEmpty( List L ){
    return L->Next == NULL;
}

int IsLast( Position P, List L ){
    /* return true if L'next is null */
    return P->Next == NULL;
}

Position Find( Elem X, List L ){
    Position P;
    P = L->Next;
    while( P->Next != NULL && P->Elem != X ){
        P = P->Next
    }
    return P;
}

void Delete( Elem X, List L ){
    Position P,Pre;
    P = L->Next;
    Pre = L;
    while( P->Elem != X && P->Next != NULL){
        Pre = Pre->Next;
        P = P->Next;
    }
    if ( P->Elem == X ){
        Pre->Next = P->Next;
    }
}
