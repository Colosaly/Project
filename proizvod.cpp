#include "proiz.h"
using namespace std;

proiz::proiz() : sernom(0) {}
proiz::proiz(const proiz& obj) : sernom(obj.sernom), firma(obj.firma), strana(obj.strana) {};
proiz::proiz(int _sernom, const string& _firma, const string& _strana) : sernom(_sernom), firma(_firma), strana(_strana) {};

int proiz::get_sernom() const { return sernom; }
string proiz::get_firma() const { return firma; }
string proiz::get_strana() const { return strana; }

void proiz::set_sernom(int new_sernom) { sernom = new_sernom; }
void proiz::set_firma(string new_firma) { firma = new_firma; }
void proiz::set_strana(string new_strana) { strana = new_strana; }

void proiz::show()
{
	cout << "Серийный номер: " << sernom << endl;
	cout << "Фирма: " << firma << endl;
	cout << "Страна изготовитель: " << strana << endl;
};
