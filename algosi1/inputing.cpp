#include <fstream>
#include <iostream>
#include <stdio.h>
#include "node.h"
#include "functions.h"

using namespace std;


void input_txt(Node*& head, unsigned int len)
{


	unsigned short num_of_list = 0;

	while (num_of_list < len) {
		Node* tmp = new Node;
		cout << "Введите элемент списка номер " << num_of_list + 1 << ": ";
		cin >> tmp->num;
		num_of_list++;
		if (num_of_list != 1)
		{
			insertEnd(head, tmp);
		}
		else
		{
			insertBeg(&head, tmp);
		}
	}
	if (num_of_list == 1)
	{
		head->next = NULL;
	}
}

void input_txt2(Node*& head, unsigned int len)
{


	unsigned int num_of_list = 0;

	while (num_of_list < len) {
		Node* tmp = new Node;
		tmp->num = rand() % 100;
		num_of_list++;


		if (num_of_list != 1)
		{
			insertEnd(head, tmp);
		}
		else
		{
			insertBeg(&head, tmp);
		}

	}
	if (num_of_list == 1)
	{
		head->next = NULL;
	}
}