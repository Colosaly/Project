#pragma once
#include<iostream>
#include<string>
using namespace std;

class WorkSpace {
private:
	int cab_num;
	string desk;
	string chair;
public:
	WorkSpace();
	WorkSpace(int c_num, const string& dsk, const string& chr);
	WorkSpace(const WorkSpace& ob);

	//setters
	void set_cab_num(int c_num);
	void set_desk(string dsk);
	void set_chair(string chr);

	//getters
	int get_cab_num();
	string get_desk();
	string get_chair();

	void show() const;
};
