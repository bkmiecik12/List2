#include <iostream>
//#include "Zwierze.h"
//#include "Pies.h"
#include "Stado.h"

using namespace std;

int main()
{
	Stado x;
	x.dajGlos();
	Zwierze p1;
	x+p1;
	x.dajGlos();

	//Pies().dajGlos();				//Jakim cudem to działa?
	//new Pies().dajGlos();	//A to nie?
}
