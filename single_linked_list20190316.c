#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

void sLLInit(Node** first)
{
    assert(first != NULL);
    *first = NULL;
}

void sLLDestory(Node** first)
{
    assert(first != NULL);
    while(*first != NULL)
    {
        Node* temp = *first;
        *first = (*first)->next;
        free(temp);
        temp = NULL;
    }
}

static Node* createNode(ElementType v)
{
    Node* node = (Node*)malloc(sizeof(Node));
    assert(node != NULL);
    node->value = v;
    return node;
}

void sLLPushFront(Node** first, ElementType v)
{
    assert(first != NULL);
    Node* node = createNode(v);
    node->next = (*first)->next;
    *first = node;
}

void sLLPopFront(Node** first)
{
    assert(first != NULL);
    Node* temp = *first;
    *first = (*first)->next;
    free(temp);
    temp = NULL;
}

Node* sLLFind(Node** first, ElementType v)
{
    assert(first != NULL);
    Node* i = NULL;
    for(i = *first; i != NULL; i = i->next)
    {
        if(v == i->value)
        {
            return i;
        }
    }
    return NULL;
}

void sLLInsertAfter(Node* pos, ElementType v)
{
    assert(pos != NULL);
    Node* node = createNode(v);
    node->next = pos->next;
    pos->next = node;
}

void sLLEraseAfter(Node* pos)
{
    assert(pos != NULL);
    Node* temp = pos->next;
    pos->next = pos->next->next;
    free(temp);
    temp = NULL;
}

void sLLRemove(Node** first, ElementType v)
{
    assert(first != NULL);
    Node* fast = *first;
    Node* slow = fast;
    while(fast != NULL)
    {
        if(fast->value == v)
        {
            if(fast == *first)
            {
                Node* temp = fast;
                *first = fast->next;
                fast = *first;
                free(temp);
                temp = NULL;
            }
            else
            {
                Node* temp = fast;
                fast = fast->next;
                slow->next = fast;
                free(temp);
                temp = NULL;
            }
        }
        else
        {
            slow = fast;
            fast = fast->next;
        }
    }
}

void sLLDisplay(Node** first)
{
    assert(first != NULL);
    Node* i = NULL;
    for(i = *first; i != NULL; i = i->next)
    {
        printf("%d  ", i->value);
    }
    printf("\n");
}
