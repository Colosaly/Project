#pragma once
#include<string>
#include <iostream>

using namespace std;

class proiz
{
private:
	int sernom;      //серийный номер
	string firma;    //фирма
	string strana;   //страна изготовителя
public:
	proiz();
	proiz(const proiz& obj);
	proiz(int _sernom, const string& _firma, const string& _strana);

	int get_sernom() const;
	string get_firma() const;
	string get_strana() const;

	void set_sernom(int new_sernom);
	void set_firma(string new_firma);
	void set_strana(string new_strana);
	void show();
};