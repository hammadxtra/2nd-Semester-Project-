#include"Person.h"
	//Default Constructor
	Person::Person():name(" "),age(0),address(" "),phoneNumber(" "){}

	//Perametrized Constructor

	Person::Person(string n, int a, string addr, string phon) {
		name = n;
		age = a;
		address = addr;
		phoneNumber = phon;
	}