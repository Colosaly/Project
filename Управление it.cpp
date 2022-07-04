// Управление it.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Comp.h"
#include "Polz.h"
#include "Proiz.h"
#include "WorkSpace.h"
#include "PerDevice.h"
#include "vector"
#include <Windows.h>

void menu()
{
	cout << endl << "     Меню    " << endl;
	cout << "1. Ввод данных" << endl;
	cout << "2. Вывод данных" << endl;
	cout << "3. Поиск" << endl;
	cout << "4. Удаление данных" << endl;
	cout << "5. Выход" << endl;
	cout << "Введите номер пункта меню для дальнейшей работы" << endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0;
	vector<Comp> List1;
	vector<proiz> List2;
	vector<polz> List3;
	vector<WorkSpace> List4;
	vector<PerDevice> List5;
	while (n != 7)
	{
		menu();
		cin >> n;
		switch (n)
		{
		case 1:vvod(List1, List2, List3, List4, List5); break;
		case 2:vivod(List1, List2, List3, List4, List5); break;
		case 3:search(List1, List2, List3, List4, List5); break;
		case 4:del(List1, List2, List3, List4, List5); break;
		case 5:break;
		default:cout << "Неверный вариант выбора" << endl;
		}
	}
	return 0;
}

void vvod(vector<Comp> &L1, vector<proiz> &L2, vector<polz> &L3, vector<WorkSpace> &L4, vector<PerDevice> &L5)
{

}
void vivod(vector<Comp> L1, vector<proiz> L2, vector<polz> L3, vector<WorkSpace> L4, vector<PerDevice> L5)
{

}
void search(vector<Comp> L1, vector<proiz> L2, vector<polz> L3, vector<WorkSpace> L4, vector<PerDevice> L5)
{
	int ip;
	cout << "Введите IP для поиска" << endl;
	cin>>ip;
	cout << endl << "Результаты поиска: " << endl;
	for (int i = 0; i < L1.size(); i++)
	{
		int ip_st = L1[i].get_ip();
		if (find(L1, ip))
			L1[i].show();
		    L2[i].show();
		    L3[i].show();
		    L4[i].show();
		    L5[i].show();
	}
}

int find(vector<Comp>L, int key)
{
	for (int i = 0; i < L.size(); i++)
		if (L[i].get_ip() == key)
			return i;
	return -1;
}

int find(vector<polz>L, int key)
{
	for (int i = 0; i < L.size(); i++)
		if (L[i].get_id() == key)
			return i;
	return -1;
}

void del(vector<Comp> &L1, vector<proiz> &L2, vector<polz> &L3, vector<WorkSpace> &L4, vector<PerDevice> &L5)
{
	int key;
	cout << "Введите IP компьютера, который хотите удалить" << endl;
	cin >> key;
	int ind = find(L1, key);
	if (ind != -1)
	{
		L1.erase(L1.begin() + ind);
		L2.erase(L2.begin() + ind);
		L3.erase(L3.begin() + ind);
		L4.erase(L4.begin() + ind);
		L5.erase(L5.begin() + ind);
		cout << "Компьютер удалён" << endl;
	}
	else
		cout << "Данные для удаления не найдены" << endl;
}

