#ifndef _Stack_h

struct StackRecord;
typedef struct StackRecord *Stack;

int IsEmpty( Stack S );
int IsFull( Stack S );
Stack CreateStack( int MaxElements );
void DisposeStack( Stack S );
void MakeEmpty( Stack S );
void Push( Elem X, Stack S );
Elem Top( Stack S );
void Pop( Stack S );
Elem TopAndPop( Stack S );
#endif
