#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

Node* sLLRemove(Node** first, ElementType v)
{
    assert(first != NULL);
    if(*first == NULL)
    {
        return *first;
    }
    Node* cur = *first;
    while(cur->next != NULL)
    {
        if(cur->next->value == v)
        {
            Node* temp = cur->next->next;
            free(cur->next);
            cur->next = temp;
        }
        else
        {
            cur = cur->next;
        }
    }
    if((*first)->value == v)
    {
        Node* temp = *first;
        *first = (*first)->next;
        free(temp);
        temp = NULL;
    }
    return *first;
}
