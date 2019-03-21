#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

Node* mergeTwoList(Node**head1, Node** head2)
{
    assert(head1 != NULL);
    assert(head2 != NULL);
    if(*head1 == NULL)
    {
        return *head2;
    }
    if(*head2 == NULL)
    {
        return *head1;
    }
    Node* first = *head1;
    Node* second = *head2;
    Node* result = NULL;
    Node* tail = NULL;
    while(first != NULL && second != NULL)
    {
        if(first->value <= second->value)
        {
            if(tail != NULL)
            {
                tail->next = first;
                tail = first;
            }
            else
            {
                result = tail = first;
            }
        }
        else
        {
            if(tail != NULL)
            {
                tail->next = second;
                tail = second;
            }
            else
            {
                result = tail = second;
            }
        }
    }
    if(first != NULL)
    {
        tail->next = first;
    }
    if(second != NULL)
    {
        tail->next = second;
    }
    return result;
}
