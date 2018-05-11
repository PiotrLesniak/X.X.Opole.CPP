// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Child1.h"
#include "Child2.h"
#include <iostream>

using namespace std;



void myFunction(AbstractClassExample* child)
{
	child->MyMethod();
}


int main()
{
	AbstractClassExample* parent = new Child1();
	//parent->MyMethod();
	//parent = new Child2();
	//parent->MyMethod();

	Child1 child1;
	Child2 child2;
	
	myFunction(parent);
	myFunction(&child2);
	char a;
	cin >> a;
    return 0;
}
