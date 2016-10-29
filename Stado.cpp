#include <iostream>
#include "Stado.h"
//#include "Zwierze.h"

using namespace std;



Stado::Stado(){}

Stado::~Stado(){}

void Stado::dajGlos()
{
	for(int i=0;i<zbior.size();i++)
		zbior[i].dajGlos();
		
	cout<<endl;
}

void Stado::operator +(Zwierze z)
{
	zbior.push_back(z);
}

void Stado::operator +(Stado z)
{
	for(int i=0;i<z.zbior.size();i++)
		zbior.push_back(z.zbior[i]);
		
	z.zbior.clear();
}
