#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

const Node* sLLDetectCycle(const Node** first)
{
    assert(first != NULL);
    if(*first == NULL)
    {
        return NULL;
    }
    const Node* fast = *first;
    const Node* slow = *first;
    while(1)
    {
        fast = fast->next;
        if(fast == NULL)
        {
            return NULL;
        }
        fast = fast->next;
        if(fast == NULL)
        {
            return NULL;
        }
        slow = slow->next;
        if(fast == slow)
        {
            break;
        }
    }
    const Node* origin = *first;
    const Node* cur = slow;
    while(origin != cur)
    {
        cur = cur->next;
        origin = origin->next;
    }
    return origin;
}
