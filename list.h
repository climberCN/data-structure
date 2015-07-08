#ifndef _List_H
typedef int Elem;
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( Position P, List L );
Position Find( Elem X, List L );
Position FindPreviou( Position P, List L );
int Delete( Elem X, List L );
Position FindPrevious( Elem X, List L );
int Insert( Elem X, List L, Position P );
int DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Position P );
Elem Retrieve( Position P );

#endif
