#include"Person.h"



//===========================================
//1.Patient Classs
// Inheritance: Derived from Person
//===========================================

class Patient :public Person {
	// Encapsulation: Data is private
	string patientId;
	string bloodGroup;
	string dateOfAdmission;

	string medicalHistory[5];
	int historyCount;
public:
	//Default Constructor
Patient();
//Parematerized Constructor
Patient(string n, int a, string addr, string phon,
		string pId, string bGroup, string doa);

	//Setters

	void setPatientId(string pId) {
		patientId = pId;
	}
	void setBloodGroup(string bGroup) {
		bloodGroup = bGroup;
	}
	void setDateOfAdmission(string doa) {
		dateOfAdmission = doa;
	}

	//Getters
	string getPatientId()const {
		return patientId;
	}
	string getBloodGroup()const {
		return bloodGroup;
	}
	string getDateOfAdmission()const {
		return dateOfAdmission;
	}


	//Its just a simple function that display success after patient Register.
	void Register();

	//Function to add Medical History
	void addMedicalHistory(string record);

	//Function to get Medical History

	void getMedicalHistory() ;

	// Overriding displayInfo() from Person

	void display();

};