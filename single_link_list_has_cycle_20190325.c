#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

int sLLDetectCycle(const Node** first)
{
    assert(first != NULL);
    if(*first == NULL)
    {
        return 0;
    }
    const Node* fast = *first;
    const Node* slow = *first;
    while(1)
    {
        fast = fast->next;
        if(fast == NULL)
        {
            return 0;
        }
        fast = fast->next;
        if(fast == NULL)
        {
            return 0;
        }
        slow = slow->next;
        if(fast == slow)
        {
            break;
        }
    }
    return 1;
}
