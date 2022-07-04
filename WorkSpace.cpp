#include "WorkSpace.h"
using namespace std;

WorkSpace::WorkSpace() {};
WorkSpace::WorkSpace(int c_num, const string& dsk, const string& chr) {};
WorkSpace::WorkSpace(const WorkSpace& ob) {};

//setters
void WorkSpace::set_cab_num(int c_num) { cab_num = c_num; }
void WorkSpace::set_desk(string dsk) { desk = dsk; }
void WorkSpace::set_chair(string chr) {	chair = chr; }

//getters
int WorkSpace::get_cab_num() { return cab_num; }
string WorkSpace::get_desk() { return desk; }
string WorkSpace::get_chair() { return chair; }

void WorkSpace::show() const {
	cout << "Рабочее место\n";
	cout << "Номер кабинета : " << cab_num << endl;
	cout << "Рабочий стол : " << desk << endl;
	cout << "Рабочее кресло : " << chair << endl;
}
