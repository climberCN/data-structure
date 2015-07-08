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
        P = P->Next;
    }
    if( P->Next != X ){
        return NULL;
    }
    return P;
}

void Delete( Elem X, List L ){
    Position P,Pre;
    Pre = FindPrevious( Elem X, List L );
    if( Pre == NULL ){
        return 0;
    }
    P = Pre->Next;
    Pre->Next = P->Next;
    free(P);
}

Position FindPrevious( Elem X, List L ){
    Position P;
    P = L;
    while( P->Next != NULL && P->Next->Elem != X )
        P = P->Next;
    if( P->Elem != X )
        return NULL;
    return P;
}

int Insert( Elem X, List L, Position P ){
    Position Tmp,Pre;
    Tmp = malloc( sizeof( struct Node ) );
    if ( Tmp == NULL)
        return -1;
    Pre = FindPrevious( P, L );
    Tmp->Next = Pre->Next;
    Pre->Next = P;
    return 0;
}

Position FindPrevious( Position P, List L ){
    Position Pre;
    Pre = L;
    while( Pre->Next != NULL && Pre->Next != P ){
        Pre = Pre->Next;
    }
    if ( Pre->Next  == P )
        return Pre;
    return NULL;
}

List MakeEmpty( List L ){
    Position Pre, P;
    Pre = L->Next;
    if (Pre == NULL)
        return -1;
    P = Pre->Next;
    while( p != NULL){
        free(Pre);
        Pre = P;
        P = P->Next;
    }
}
