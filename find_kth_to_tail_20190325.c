#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementTyep;

typedef struct Node
{
    ElementTyep value;
    struct Node* next;
} Node;

const Node* sLLFindKthToTail(const Node** first, size_t k)
{
    assert(first != NULL);
    const Node* front = *first;
    const Node* back = *first;
    size_t i;
    for(i = 0; front != NULL && i < k; ++i)
    {
        front = front->next;
    }
    if(i < k)
    {
        return NULL;
    }
    while(front != NULL)
    {
        front = front->next;
        back = back->next;
    }
    return back;
}
