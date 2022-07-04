#include "Header.h"
using namespace std;

polz::polz() : word(0), id(0) {}
polz::polz(const polz& obj) : login(obj.login), word(obj.word), id(obj.id) {};
polz::polz(const string& _login, int _word, int _id) : login(_login), word(_word), id(_id) {};

string polz::get_login() const { return login; }
int polz::get_word() const { return word; }
int polz::get_id() const { return id; }

void polz::set_login(string new_login) { login = new_login; }
void polz::set_word(int new_word) { word = new_word; }
void polz::set_id(int new_id) { id = new_id; }

void polz::show()
{
	cout << "Логин: " << login << endl;
	cout << "Пароль: " << word << endl;
	cout << "ID: " << id << endl;
};