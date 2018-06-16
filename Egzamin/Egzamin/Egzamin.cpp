// Egzamin.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include "City.h"
#include "Street.h"
using namespace std;

int main()
{
	cout << "City" << endl;
	cout << "TWORZENIE CITY - KONSTRUKTOR BEZPARAMETROWY" << endl;
	City* c1 = new City();
	c1->Print();
	
	cout << "TWORZENIE CITY - KONSTRUKTOR Z 2 PARAMETRAMI" << endl;
	c1 = new City(new char('Y'), 7);
	c1->Print();
	
	cout << "TWORZENIE CITY - KONSTRUKTOR Z KOPIUJACY" << endl;
	City* c2 = new City(*c1);
	c2->Print();

	cout << "CITY - INPUT" << endl;
	c1->Input();// pobieramy od uzytkowniaka dane
	c1->Print();

	cout << "CITY - SetArial 100" << endl;
	c1->SetArial(100);
	cout << "ARIAL = " << c1->GetArial() << endl;

	cout << "CITY SetName Z" << endl;
	c1->SetName(new char('Z'));
	char* name = c1->GetName();
	cout << "NAME = " << *name << endl;
	
	cout << "CITY OPERATOR = " << endl;
	City c3;
	c3 = *c1;
	c3.Print();
		
	cout << "Street" << endl;
	cout << "TWORZENIE STREET - KONSTRUKTOR BEZPARAMETROWY" << endl;
	Street* s1 = new Street();
	s1->Print();

	cout << "TWORZENIE STREET - KONSTRUKTOR Z 2 PARAMETRAMI" << endl;
	s1 = new Street(new char('y'), 7, new char('z'));
	s1->Print();

	cout << "TWORZENIE STREET - KONSTRUKTOR Z KOPIUJACY" << endl;
	Street* s2 = new Street(*s1);
	s2->Print();

	cout << "STREET - INPUT" << endl;
	s1->Input();// pobieramy od uzytkowniaka dane dla obiektu street
	s1->Print();

	cout << "STREET - SetArial 100" << endl;
	s1->SetArial(100);
	cout << "NUMBER = " << s1->GetArial() << endl;

	cout << "STREET SetName Z" << endl;
	s1->SetName(new char('Z'));
	name = s1->GetName();
	cout << "NAME = " << *name << endl;

	cout << "STREET SetTitle X" << endl;
	s1->SetTitle(new char('Z'));
	char* title = s1->GetName();
	cout << "TITLE = " << *title << endl;
	
	cout << "CITY OPERATOR = " << endl;
	Street s3;
	s3 = *s1;
	s3.Print();
	
	//to jest tylko do zatrzymania programu
	int x;
	cin >> x;
    return 0;
}

