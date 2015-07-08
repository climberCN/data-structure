#include "list.h"
#include <stdlib.h>


struct Node{
    Elem Elem;
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
    if( P->Elem != X ){
        return NULL;
    }
    return P;
}

int Delete( Elem X, List L ){
    Position P,Pre;
    Pre = FindPrevious( Elem X, List L );
    if( Pre == NULL ){
        return 0;
    }
    P = Pre->Next;
    Pre->Next = P->Next;
    free(P);
    return 0;
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
    Pre = FindPreviou( P, L );
    Tmp->Next = Pre->Next;
    Pre->Next = P;
    return 0;
}

Position FindPreviou( Position P, List L ){
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
        return L;
    P = Pre->Next;
    while( P != NULL){
        free(Pre);
        Pre = P;
        P = P->Next;
    }
    free(Pre);
    return L;
}

int DeleteList(List L){
    Position Pre, P;
    Pre = L;
    if (Pre == NULL)
        return -1;
    P = Pre->Next;
    while( P != NULL){
        free(Pre);
        Pre = P;
        P = P->Next;
    }
    free(Pre);    
    return 0;
}

Position Header(List L){
    return L;
}

Position First(List L){
    return L->Next;
}

Position Advance( Position P ){
    return P->Next;
}

Elem Retrive( Position P ){
    return P->Elem;
}

