// Управление it.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Comp.h"
#include "Polz.h"
#include "Proiz.h"
#include "WorkSpace.h"
#include "PerDevice.h"
#include "vector"
#include <Windows.h>
#include <iomanip>

void menu();
void vvod(vector<Comp>& L1, vector<proiz>& L2, vector<polz>& L3, vector<WorkSpace>& L4, vector<PerDevice>& L5);
void vivod(vector<Comp> L1, vector<proiz> L2, vector<polz> L3, vector<WorkSpace> L4, vector<PerDevice> L5);
void search(vector<Comp> L1, vector<proiz> L2, vector<polz> L3, vector<WorkSpace> L4, vector<PerDevice> L5);
void del(vector<Comp>& L1, vector<proiz>& L2, vector<polz>& L3, vector<WorkSpace>& L4, vector<PerDevice>& L5);
int find(vector<Comp>L, int key);
void hline1();
void hline2();
void hline3();

int find(vector<Comp>L, int key)
{
	for (int i = 0; i < L.size(); i++)
		if (L[i].get_ip() == key)
			return i;
	return -1;
}

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

void vvod(vector<Comp>& L1, vector<proiz>& L2, vector<polz>& L3, vector<WorkSpace>& L4, vector<PerDevice>& L5)
{
	char choise, ch;
	string proc, login, firma, strana, mouse, keyb, screen, dsc, chr;
	int ip, mem, id, word, sernom, c_num;
	while (true)
	{
		cout << "Введите процессор: " << endl;
		while (cin.get() != '\n');
		getline(cin, proc);
		cout << "Введите IP: " << endl;
		cin >> ip;
		cout << "Введите размер памяти: " << endl;
		cin >> mem;

		cout << "Введите логин пользователя: " << endl;
		while (cin.get() != '\n');
		getline(cin, login);
		cout << "Введите ID пользователя: " << endl;
		cin >> id;
		cout << "Введите пароль: " << endl;
		cin >> word;

		cout << "Введите название фирмы: " << endl;
		while (cin.get() != '\n');
		getline(cin, firma);
		cout << "Введите страну производителя: " << endl;
		getline(cin, strana);
		cout << "Введите серийный номер: " << endl;
		cin >> sernom;
		L1.push_back(Comp(ip, proc, mem));
		L2.push_back(proiz(sernom, firma, strana));
		L3.push_back(polz(login, word, id));
		while (true) 
		{
			cout << "Хотите добавить информацию о периферийных ус-вах? Если да, введите 'д', если нет - 'н': " << endl;
			cin >> choise;
			if (choise == 'д')
			{
				cout << "Введите информацию о мышке: " << endl;
				while (cin.get() != '\n');
				getline(cin, mouse);
				cout << "Введите информацию о клавиатуре: " << endl;
				getline(cin, keyb);
				cout << "Введите информацию о мониторе: " << endl;
				getline(cin, screen);
				L5.push_back(PerDevice(mouse, keyb, screen));
				break;
			}
			if (choise == 'н')
			{
				L5.push_back(PerDevice());
				break;
			}
		}
		while (true)
		{
			cout << "Хотите добавить информацию о рабочем месте? Если да, введите 'д', если нет - 'н': " << endl;
			cin >> choise;
			if (choise == 'д')
			{
				cout << "Введите номер кабинета: " << endl;
				cin >> c_num;
				cout << "Введите информацию о столе: " << endl;
				while (cin.get() != '\n');
				getline(cin, dsc);
				cout << "Введите информацию о кресле: " << endl;
				getline(cin, chr);
				cout << dsc << endl;
				L4.push_back(WorkSpace(c_num, dsc, chr));
				break;
			}
			if (choise == 'н')
			{
				L4.push_back(WorkSpace());
				break;
			}
		}
		while (true)
		{
			cout << "Продолжить ввод? Введите д - если да, н - если нет" << endl;
			cin >> ch;
			if (ch == 'д' || ch == 'н') break;
		}
		if (ch == 'н') break;
	}
}

void vivod(vector<Comp> L1, vector<proiz> L2, vector<polz> L3, vector<WorkSpace> L4, vector<PerDevice> L5)
{
	char ch1='0';
	int ch2;
	cout << "                      IT" << endl;
	hline1();
	cout << "|  IP компьютера   |  Серийный номер   | Логин пользователя |" << endl;
	hline1();
	for (int i = 0; i < L1.size(); i++)
	{
		cout << "|" << setw(19) << L1[i].get_ip();
		cout << "|" << setw(19) << L2[i].get_sernom();
		cout << "|" << setw(19) << L3[i].get_login() << "|";
		cout << endl;
	}
	hline1();
	cout << endl << endl;
	while (true)
	{
		cout << "Хотите рассмотреть одну из библеотек подробно? Введите д - если да, н - если нет" << endl;
		cin >> ch1;
		if (ch1 == 'н')
			break;
		cout << "Какую из библиотек вы хотите посмотреть?" << endl << endl;
		cout << "1. Компьютеры" << endl;
		cout << "2. Производители" << endl;
		cout << "3. Пользователи" << endl << endl;
		cin >> ch2;
		switch (ch2)
		{
		    case 1:
			{
				cout << "                Компьютеры" << endl;
				hline2();
				cout << "|IP компьютера|         Процессор          | Память (Гб) |     Мышь    |   Клавиатура  |    Монитор   |" << endl;
				hline2();
				for (int i = 0; i < L1.size(); i++)
				{
					cout << "|" << setw(13) << L1[i].get_ip();
					cout << "|" << setw(28) << L1[i].get_proc();
					cout << "|" << setw(13) << L1[i].get_mem();
					cout << "|" << setw(13) << L5[i].get_mouse();
					cout << "|" << setw(15) << L5[i].get_keyb();
					cout << "|" << setw(14) << L5[i].get_screen() << "|";
					cout << endl;
				}
				hline2();
				break;
			}
		    case 2:
			{
				cout << "                Производители" << endl;
				hline1();
				cout << "|  Серийный номер   |  Название фирмы  |Страна производителя|" << endl;
				hline1();
				for (int i = 0; i < L1.size(); i++)
				{
					cout << "|" << setw(19) << L2[i].get_sernom();
					cout << "|" << setw(19) << L2[i].get_firma();
					cout << "|" << setw(19) << L2[i].get_strana() << "|";
					cout << endl;
				}
				hline1();
				break;
			}
		    case 3:
			{
				cout << "                Пользователи" << endl;
				hline3();
				cout << "|  Логин  |    Пароль    |      ID      |Номер кабинета|     Стол     |      Стул      |" << endl;
				hline3();
				for (int i = 0; i < L1.size(); i++)
				{
					cout << "|" << setw(9) << L3[i].get_login();
					cout << "|" << setw(14) << L3[i].get_word();
					cout << "|" << setw(14) << L3[i].get_id();
					cout << "|" << setw(14) << L4[i].get_cab_num();
					cout << "|" << setw(14) << L4[i].get_desk();
					cout << "|" << setw(16) << L4[i].get_chair() << "|";
					cout << endl;
				}
				hline3();
				break;
			}
			default: 
			{
				cout << "Вы ввели неправильный вариант" << endl;
				break;
			}
		}
		break;
	}
}

void hline1()
{
	for (int i = 0; i <= 60; i++)
		cout << "-";
	cout << endl;
}

void hline2()
{
	for (int i = 0; i <= 102; i++)
		cout << "-";
	cout << endl;
}

void hline3()
{
	for (int i = 0; i <= 87; i++)
		cout << "-";
	cout << endl;
}

void search(vector<Comp> L1, vector<proiz> L2, vector<polz> L3, vector<WorkSpace> L4, vector<PerDevice> L5)
{
	int ip;
	cout << "Введите IP компьютера, который хотите найти." << endl;
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

