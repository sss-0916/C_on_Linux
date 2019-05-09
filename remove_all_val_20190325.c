#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

Node* sLLRemoveAll(Node** first, ElementType v)
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
            Node* temp = cur->next;
            cur->next = cur->next->next;
            free(temp);
            temp = NULL;
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

Node* sLLRemoveAll2(Node** first, ElementType v)
{
    assert(first != NULL);
    Node* cur = *first;
    Node* result = NULL;
    Node* tail = NULL;
    while(cur != NULL)
    {
        Node* temp = cur->next;
        if(cur->value != v)
        {
            cur->next = NULL;
            if(tail != NULL)
            {
                tail->next = cur;
                tail = cur;
            }
            else
            {
                tail = result = cur;
            }
        }
        cur = temp;
    }
    return result;
}
