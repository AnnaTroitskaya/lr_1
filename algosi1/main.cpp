#include <iostream>
#include <locale.h>
#include "node.h"
#include "functions.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Выберите версию программы:\n1. Cписки вводятся с клавиатуры и результаты выводятся на экран, что удобно для проверки работы функций";
	cout << "\n2. Списки заполняются рандомными числами от 1 до 10 и результаты не выводятся на экран. Эта версия нужно для того, чтобы оченить время работы методов\n";
	unsigned int choice;
	cin >> choice;
	menu(choice);
}