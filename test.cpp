#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

class Zwierze
{
	public:
	virtual void daj_glos()=0;
};

class Pies :public Zwierze
{
	public:	
	void daj_glos()
	{
		cout<<"Hau! ";
	}
};

class Kot :public Zwierze
{
	public:	
	void daj_glos()
	{
		cout<<"Miau! ";
	}
};

class Stado
{
	vector <Zwierze*> s;
	public:
	void daj_glos()
	{
		for(int i=0;i<s.size();i++)
			s[i]->daj_glos();
			
		cerr<<"\n";
	}
	
	void operator +(Zwierze* z)
	{
		s.push_back(z);
	}

	void operator +(Stado z)
	{
		for(int i=0;i<z.s.size();i++)
			s.push_back(z.s[i]);
		
		z.s.clear();
	}
	void operator -(Zwierze* z)
	{
		string s1=typeid(*z).name();
		bool flaga=0;
		int i=0;
		while(i<s.size() && flaga==0)
		{
			string s2=typeid(*s[i]).name();
			if(s1.compare(s2)==0) 
			{
				s.erase(s.begin()+i);
				flaga=1;
			}
			i++;
		}
	}
	void operator -(Stado z)
	{
		
	}
	
};

int main()
{
	//Pies().daj_glos();
	Stado x;
	x.daj_glos();
	x+new Pies();
	x+new Kot();
	x-new Pies();
	x.daj_glos();
	
	return 0;
}


