#include <fstream>
#include <iostream>
#include "node.h"
#include "functions.h"
using namespace std;



void insertEnd(Node* head, Node* put)
{
	Node* cur = new Node;
	Node* tmp = new Node;

	if (tmp != NULL)
	{
		tmp->num = put->num;
		tmp->next = NULL;
		cur = head;
		while (cur->next != NULL)
		{
			cur = cur->next; // переход на последний элемент
		}
		cur->next = tmp;
	}
}


void insertBeg(Node** head, Node* put) // указатель на начало списка изменяемый
{
	Node* tmp = new Node;
	if (tmp != NULL)
	{
		tmp->num = put->num;
		tmp->next = *head;
		*head = tmp;
	}
	//delete[] tmp;
}

void insertMiddle(Node** head, Node* put, unsigned int index)
{
	unsigned int i = 0;
	Node* cur = new Node;
	Node* tmp = new Node;

	if (tmp != NULL)
	{
		if (index == 1)
		{
			insertBeg(head, put);
		}
		else
		{
			tmp->num = put->num;
			cur = *head;
			while (i < index - 2)
			{
				i++;
				cur = cur->next; // переход на нужный элемент
			}
			put = cur->next;
			cur->next = tmp;
			tmp->next = put;
		}
	}

}

void outList(Node* head)
{
	Node* cur;
	cur = head;
	while (cur != NULL)
	{
		cout << cur->num;
		cout << " -> ";
		cur = cur->next;
	}
	cout << "NULL" << endl;
}

void replace_elem(Node** head, Node* put, unsigned int index)
{
	unsigned int i = 0;
	Node* cur = new Node;
	cur = *head;
	while (i < index - 1)
	{
		i++;
		cur = cur->next; // переход на нужный элемент
	}
	cur->num = put->num;
}


void reverseOrder(Node** head)
{
	Node* prev_node = NULL;
	Node* cur_node = *head;
	Node* next_node = (*head)->next;
	while (next_node != NULL)
	{
		cur_node->next = prev_node;
		prev_node = cur_node;
		cur_node = next_node;
		next_node = cur_node->next;

	}
	cur_node->next = prev_node;
	*head = cur_node;
}

void insertListind(Node** head, Node* head2, unsigned int index)
{
	unsigned int i = 0;
	Node* cur = new Node;
	Node* tmp = new Node;

	cur = *head;
	while (i < index - 1)
	{
		i++;
		cur = cur->next; // переход на нужный элемент
	}
	tmp = cur->next;
	cur->next = head2;
	while (cur->next != NULL)
	{
		cur = cur->next; // переход на последний элемент
	}
	cur->next = tmp;
}

void insertListEnd(Node** head, Node* head2)
{
	Node* cur = new Node;
	cur = *head;
	while (cur->next != NULL)
	{
		cur = cur->next; // переход на последний элемент
	}
	cur->next = head2;
}

void insertListBeg(Node** head, Node* head2)
{
	Node* cur = new Node;
	cur = head2;
	while (cur->next != NULL)
	{
		cur = cur->next; // переход на последний элемент
	}
	cur->next = *head;
	*head = head2;
}

void swap_elems(Node* head, unsigned int ind1, unsigned int ind2)
{
	int x, y;
	Node* cur = head;

	Node* cur1 = head;

	unsigned int i = 0;
	while (i < ind1 - 1)
	{
		i++;
		cur1 = cur1->next;
	}
	x = cur1->num;
	Node* cur2 = cur1;
	while (i < ind2 - 1)
	{
		i++;
		cur2 = cur2->next;
	}
	y = cur2->num;
	i = 1;
	while (i <= ind2)
	{
		if (ind1 == i) {
			cur->num = y;
		}
		if (ind2 == i) {
			cur->num = x;
		}
		cur = cur->next;
		i++;
	}
}