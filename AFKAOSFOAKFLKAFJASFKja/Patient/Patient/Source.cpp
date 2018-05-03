#include "Patient.h"

int main()
{
	Patient p0("kolya", "toto", "Lol", "furma", "retard", 123456);
	Patient p1("vitya", "poto", "Mol", "surma", "petard", 654321);
	Patient p2("petya", "moto", "Pol", "turma", "ketard", 123654);
	Patient p3("kaisar", "soto", "Dol", "durma", "letard", 321456);
	vector <Patient> vect = {p0,p1,p2,p3};
	String_ vd="";
	cin >> vd;

	return 0;
}