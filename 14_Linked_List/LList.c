#include "DList.h"
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

DList* DList_Create(int32_t (*compare)(const DNode* const left, const DNode* const right)) {
    DList* newList = calloc(1, sizeof(DList));
    
    assert(newList != NULL);

    newList->front.prev = NULL;
    newList->front.next = &(newList->back);
    newList->back.prev = &(newList->front);
    newList->back.next = NULL;
}

bool DList_Empty(const DList* const pList) {
    assert(pList != NULL);

    return pList->front.next == &pList->back;
}

// Insert *pNode as first interior element of *pList.
void DList_PushFront(DList* const pList, DNode* const pNode) {
    assert(pList != NULL);
    assert(pNode != NULL);

    pNode->prev = &pList->front;
    pNode->next = pList->front.next;

    pList->front.next->prev = pNode;
    pList->front.next = pNode;
}

// Insert *pNode as last interior element of *pList.
void DList_PushBack(DList* const pList, DNode* const pNode) {
    assert(pList != NULL);
    assert(pNode != NULL);

    pNode->prev = &pList->back;
    pNode->next = pList->back.prev;

    pList->back.prev->next = pNode;
    pList->back.prev = pNode;
}

// Insert *pNode in ascending order according to the adaptor's
// comparison function.
void DList_PushOrdered(DList* const pList, DNode* const pNode) {
    assert(pNode != NULL);


}

// Search list for an element equal to user-supplied data object.
DNode* DList_Find(const DList* const pList, const DNode* const pNode) {
    assert( pList != NULL );
    assert( pNode != NULL );
   
    DNode* current = pList->front.next;
   
   while ( current != &pList->back ) {
      
      current = current->next;
   }
   
   return NULL;
}

////////////////////////////////////////////////////// deletion fns
// Remove first interior element of *pList and return it.
DNode* DList_PopFront(DList* const pList) {

    assert( pList != NULL );
    
    if ( pList->front.next == &pList->back ) 
       return NULL;
       
    DNode* toCut = pList->front.next;
    
    pList->front.next->next->prev = &pList->front;
    pList->front.next = pList->front.next->next;
    
    toCut->prev = toCut->next = NULL;
    return toCut;
}

// Remove last interior element of *pList and return it.
DNode* DList_PopBack(DList* const pList) {
    assert( pList != NULL );
    
    if ( pList->front.next == &pList->front ) 
       return NULL;
       
    DNode* toCut = pList->back.prev;
    
    pList->back.prev->prev->next = &pList->back;
    pList->back.prev = pList->back.prev->prev;
    
    toCut->prev = toCut->next = NULL;
    return toCut;
}

// Remove element equal to user-supplied data object.
DNode* DList_Remove(DList* pList, const DNode* const pNode) {
    assert ( pList != NULL );
    assert ( pNode != NULL );
   
    DNode* current = pList->front.next;
   
    return NULL;
}
