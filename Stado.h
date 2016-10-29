#include <iostream>
#include <vector>
#include "Zwierze.h"

using namespace std;

class Stado
{

	private:
	
	vector <Zwierze> zbior;
	
	public:
	
	Stado();
	~Stado();
	
	void dajGlos();
	void operator +(Stado);
	void operator +(Zwierze);
	

};
