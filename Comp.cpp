#include "Comp.h"
using namespace std;

Comp::Comp() : ip(0), mem(0) {}
Comp::Comp(const Comp& obj) : ip(obj.ip), proc(obj.proc), mem(obj.mem) {};
Comp::Comp(int _ip, const string& _proc, int _mem) : ip(_ip), proc(_proc), mem(_mem) {};
int Comp::get_ip() const { return ip; };
string Comp::get_proc() const { return proc; };
int Comp::get_mem() const { return mem; };
void Comp::set_ip(int new_ip) { ip = new_ip; };
void Comp::set_proc(string new_proc) { proc = new_proc; };
void Comp::set_mem(int new_mem) { mem = new_mem; };
void Comp::show()
{
	cout << "IP: " << ip << endl;
	cout << "Процессор: " << proc << endl;
	cout << "Память: " << mem << endl;
};

