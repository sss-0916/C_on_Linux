#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

Node* sLLPartition(Node** first, ElementType v)
{
    assert(first != NULL);
    Node* large = NULL;
    Node* large_tail = NULL;
    Node* small = NULL;
    Node* small_tail = NULL;
    Node* cur = *first;
    while(cur != NULL)
    {
        if(cur->value < v)
        {
            if(small_tail != NULL)
            {
                small_tail->next = cur;
                small_tail = cur;
            }
            else
            {
                small_tail = small = cur;
            }
        }
        else
        {
            if(large_tail != NULL)
            {
                large_tail->next = cur;
                large_tail = cur;
            }
            else
            {
                large_tail = large = cur;
            }
        }
    }
    if(small_tail != NULL)
    {
        small_tail->next = large;
    }
    if(large_tail != NULL)
    {
        large_tail->next = NULL;
    }
    if(small_tail != NULL)
    {
        return small;
    }
    return large;
}
