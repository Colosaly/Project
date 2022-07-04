#pragma once
#include<string>
#include <iostream>

using namespace std;

class polz
{
private:
	string login;    //логин
	int word;         //пароль
	int id;          //айди
public:
	polz();
	polz(const polz& obj);
	polz(const string& _login, int _word, int _id );

	string get_login() const;
	int get_word() const;
	int get_id() const;

	void set_login(string new_login);
	void set_word(int new_word);
	void set_id(int new_id);
	void show();
};