#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

Node* sLLDeleteDuplicate(Node** first)
{
    assert(first != NULL);
    if(*first == NULL)
    {
        return *first;
    }
    Node* fake = (Node*)malloc(sizeof(Node));
    fake->next = *first;
    Node* prev = fake;
    Node* fast = (*first)->next;
    Node* slow = *first;
    while(fast != NULL)
    {
        if(fast->value != slow->value)
        {
            prev = slow;
            slow = fast;
            fast = fast->next;
        }
        else
        {
            while(fast != NULL && fast->value == slow->value)
            {
                fast = fast->next;
            }
            Node* cur = slow;
            while(cur != fast)
            {
                Node* temp = cur;
                cur = cur->next;
                free(temp);
                temp = NULL;
            }
            prev->next = fast;
            slow = fast;
            if(fast != NULL)
            {
                fast = fast->next;
            }
        }
    }
    *first = fake->next;
    free(fake);
    fake = NULL;
    return *first;
}
