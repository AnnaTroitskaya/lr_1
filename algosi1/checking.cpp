#include <fstream>
#include <iostream>
#include "node.h"
#include "functions.h"

using namespace std;

bool contains(Node** head, Node* head2, unsigned int len1, unsigned int len2)
{
    Node* cur1 = new Node;
    cur1 = *head;
    Node* cur2 = new Node;
    cur2 = head2;

    if (cur1 == NULL && cur2 == NULL)
        return true;

    if (len1 < len2)
        return false;

    while (cur1 != NULL)
    {

        while (cur1->num == cur2->num)
        {
            cur1 = cur1->next;
            cur2 = cur2->next;
            if (cur2 == NULL)
                return true;
        }
        if (cur2 == NULL)
        {
            return true;
        }
        else
        {
            cur2 = head2;
        }
        cur1 = cur1->next;
    }
    return false;

}

unsigned int firstContain(Node** head, Node* head2, unsigned int len1, unsigned int len2)
{
    Node* cur1 = new Node;
    cur1 = *head;
    Node* cur2 = new Node;
    cur2 = head2;
    unsigned int i = 0;

    while (cur1 != NULL)
    {
        while (cur1->num == cur2->num)
        {
            cur1 = cur1->next;
            i++;
            cur2 = cur2->next;
            if (cur2 == NULL)
                return i - len2 + 1;
        }
        if (cur2 == NULL)
        {
            return i - len2 + 1;
        }
        else
        {
            cur2 = head2;
        }
        cur1 = cur1->next;
        i++;
    }
    return i;
}

unsigned int lastContain(Node** head, Node* head2, unsigned int len1, unsigned int len2)
{
    Node* cur1 = *head;
    Node* cur2 = head2;
    unsigned int i = 1, counter = 0;

    while (cur1 != NULL)
    {
        if (cur1->num == cur2->num)
        {


            cur2 = cur2->next;
            if (cur2 == NULL)
            {
                cur2 = head2;
                counter = i - len2 + 1;
            }
            cur1 = cur1->next;
            i++;
        }
        else
        {
             if(cur2 == head2)
             {
                 cur1 = cur1->next;
                 i++;
             }
             else
             {
                 cur2 = head2;
             }
        }

    }
    return counter;
}

