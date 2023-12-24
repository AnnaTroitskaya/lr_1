#include <fstream>
#include <iostream>
#include <time.h>
#include "node.h"
#include "functions.h"
using namespace std;


int get_elem(Node** head, unsigned int index)
{
	Node* cur = new Node;
	unsigned int i = 0;
	cur = *head;
	while (i < index - 1)
	{
		i++;
		cur = cur->next; // ������� �� ������ �������
	}
	//cout << "������� � ��������" << index << ": " << cur->num << endl;
	return cur->num;
}

unsigned int get_len(Node* head)
{

	Node* cur;
	cur = head;
	unsigned int i = 0;
	while (cur != NULL)
	{
		i++;
		cur = cur->next;
	}
	//cFinish = clock();
	//cout << "\n����� ���������� ������: " << cFinish - cStart << endl;
	return i;
}