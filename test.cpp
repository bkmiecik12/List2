#include <iostream>
#include <vector>
using namespace std;

class Zwierze
{
	public:
	virtual void daj_glos(){}
};

class Pies : public Zwierze
{
	public:
	Pies(){}
	void daj_glos()
	{
		cout<<"Hau! ";
	}
};

class Stado
{
	vector <Zwierze> s;
	public:
	void daj_glos()
	{
		for(int i=0;i<s.size();i++)
			s[i].daj_glos();
			
		cerr<<"test1\n";
	}
	
	void operator +(Zwierze z)
	{
		s.push_back(z);
	}

	void operator +(Stado z)
	{
		for(int i=0;i<z.s.size();i++)
			s.push_back(z.s[i]);
		
		z.s.clear();
	}
	
};

int main()
{
	Pies().daj_glos();
	Stado x;
	x.daj_glos();
	x+Pies();
	x.daj_glos();
	return 0;
}


