#include<iostream>
#include<string>
using namespace std;



//===========================================
//1.Person Classs
//Abstract Class and Pure Virtual Function
//===========================================

class Person {

	//Encapsulation : Data is Private
	string name;
	int age;
	string address;
	string phoneNumber;
public:
//Default Constructor 
Person();
//Perametrized Constructor
Person(string n, int a, string addr, string phon);
	//Setters

	void setName(string n) {
		name = n;
	}
	void setAge(int a) {
		age = a;
	}
	void setAddress(string addr) {
		address = addr;
	}
	void setPhoneNumber(string phon) {
		phoneNumber = phon;
	}

	//Getters

	string getName()const {
		return name;
	}
	int getAge()const {
		return age;
	}
	string getAddress()const {
		return address;
	}
	string getPhoneNumber()const {
		return phoneNumber;
	}


	// Pure Virtual Function (Makes this class Abstract)
    // Polymorphism: Every child MUST define how to display their details
	virtual void display() = 0;

};