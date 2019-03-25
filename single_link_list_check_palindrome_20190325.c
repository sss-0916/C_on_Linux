#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
} Node;

int sLLCheckPalindrome(Node** first)
{
    assert(first != NULL);
    Node* middle = sLLMiddleNode(first);
    Node* reverse = sLLReverse(middle->next);
    Node* origin = *first;
    while(origin != NULL && reverse != NULL)
    {
        if(origin->value != reverse->value)
        {
            return 0;
        }
        origin = origin->next;
        reverse = reverse->next;
    }
    return 1;
}
