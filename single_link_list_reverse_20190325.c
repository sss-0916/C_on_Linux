#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

Node* sLLReverse(Node** first)
{
    assert(first != NULL);
    if(*first == NULL)
    {
        return *first;
    }
    Node* cur = *first;
    Node* result = NULL;
    while(cur != NULL)
    {
        Node* temp = cur->next;
        cur->next = result;
        result = cur;
        cur = temp;
    }
    return result;
}
