#include <iostream>
#include <locale.h>
#include "node.h"
#include "functions.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "�������� ������ ���������:\n1. C����� �������� � ���������� � ���������� ��������� �� �����, ��� ������ ��� �������� ������ �������";
	cout << "\n2. ������ ����������� ���������� ������� �� 1 �� 10 � ���������� �� ��������� �� �����. ��� ������ ����� ��� ����, ����� ������� ����� ������ �������\n";
	unsigned int choice;
	cin >> choice;
	menu(choice);
}