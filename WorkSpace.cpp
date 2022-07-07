#include "WorkSpace.h"
using namespace std;

WorkSpace::WorkSpace() : cab_num(0) {};
WorkSpace::WorkSpace(int _cab_num, const string& _desk, const string& _chair) : cab_num(_cab_num), desk(_desk), chair(_chair) {};
WorkSpace::WorkSpace(const WorkSpace& obj) : cab_num(obj.cab_num), desk(obj.desk), chair(obj.chair) {};

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
