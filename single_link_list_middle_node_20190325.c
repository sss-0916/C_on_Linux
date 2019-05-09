#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementTyep;

typedef struct Node
{
    ElementTyep value;
    struct Node* next;
} Node;

Node* sLLMiddleNode(Node** first)
{
    assert(first != NULL);
    Node* fast = *first;
    Node* slow = *first;
    while(1)
    {
        fast = fast->next;
        if(fast == NULL)
        {
            break;
        }
        slow = slow->next;
        fast = fast->next;
        if(fast == NULL)
        {
            break;
        }
    }
    return slow;
}
