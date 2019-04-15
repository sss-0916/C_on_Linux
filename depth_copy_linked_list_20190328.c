#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ElementType;

typedef struct Node
{
    ElementType value;
    struct Node* next;
    struct Node* random;
} Node;

Node* depthCopy(Node** head)
{
    assert(head != NULL);
    if(*head == NULL)
    {
        return NULL;
    }
    Node* old_node = *head;
    while(old_node != NULL)
    {
        Node* new_node = (Node*)malloc(sizeof(Node));
        Node* temp = old_node->next;
        assert(new_node != NULL);
        new_node->value = old_node->value;
        new_node->next = old_node->next;
        old_node->next = new_node;
        old_node = temp;
    }
    old_node = *head;
    while(old_node != NULL)
    {
        Node* new_node = old_node->next;
        if(old_node->random == NULL)
        {
            new_node->random = NULL;
        }
        else
        {
            new_node->random = old_node->random->next;
        }
        old_node = old_node->next->next;
    }
    old_node = *head;
    Node* new_head = old_node->next;
    while(old_node != NULL)
    {
        Node* new_node = old_node->next;
        old_node->next = old_node->next->next;
        if(new_node->next != NULL)
        {
            new_node->next = new_node->next->next;
        }
        old_node = old_node->next;
    }
    return new_head;
}
