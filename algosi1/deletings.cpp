#include <fstream>
#include <iostream>
#include "node.h"
#include "functions.h"
using namespace std;

void DeleteMiddle(Node* cur) //�������� �������� ����� cur
{
	Node* tmp = cur->next;
	if (tmp != NULL)
	{
		cur->next = tmp->next;
		delete tmp;
	}
}

void delete_ind(Node** head, unsigned int index)
{
	if (index == 1)
	{
		DeleteBeg(head);
	}
	else
	{
		Node* cur = *head;
		unsigned int i = 0;
		while (i < index - 2)
		{
			i++;
			cur = cur->next; // ������� �� ������ �������
		}
		Node* tmp = cur->next;
		if (tmp != NULL)
		{
			cur->next = tmp->next;
			delete tmp;
		}
	}
}

void DeleteEnd(Node** head)
{
	Node* tmp = *head;
	if (tmp != NULL)
	{
		Node* cur = NULL;
		while (tmp->next != NULL) //������� �� ��������� �������
		{
			cur = tmp;
			tmp = tmp->next;
		}
		if (cur == NULL) //��� ���� ������� � ������
			*head = NULL;
		else
			cur->next = NULL;
		delete tmp;
	}
}

void DeleteBeg(Node** head)
{

	Node* tmp = *head;
	if (tmp != NULL) //������ �� ������
	{
		*head = tmp->next;
		delete tmp;
	}
}

void DeleteList(Node** head) //�������� ����� ������
{
	Node* cur;
	while (*head != NULL)
	{
		cur = (*head)->next;
		delete* head;
		*head = cur;
	}
}

bool isEmpty(Node** head)
{
	if (*head == NULL) return true;
	else return false;
}