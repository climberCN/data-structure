#ifndef _List_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( Position P, List L );
Position Find( Elem X, List L );
void Delete( Elem X, List L );
Position FindPrevious( Elem X, List L );
void Insert( Elem X, List L, Position P );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Postion P );
Elem Retrieve( Position P );

#endif
