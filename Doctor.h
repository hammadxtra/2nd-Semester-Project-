#include"Employee.h"
//===========================================
//4.Doctor Class
// Inheritance: Derived from Employee
//===========================================

class Doctor :public Employee {
	// Encapsulation: Data is private

	string specialization;
	string licenseNumber;
	string scheduale;
public:
	//Default Constructor
	Doctor();

	//Paramterized Constructor
	Doctor(string n, int ag, string addr, string pho,
		string eid, double sa, string doj,
		string spec, string ln, string sched);

	//setters
	void setSpecialization(string spec) {
		specialization = spec;
	}
	void setLicenseNumber(string ln) {
		licenseNumber = ln;
	}
	void setScheduale(string sched) {
		scheduale = sched;
	}

	//Getters
	string getSpecialization()const {
		return specialization;
	}
	string getLicenseNumber()const {
		return licenseNumber;
	}
	string getSchedual()const {
		return scheduale;
	}

//Funtion to add Diagnosis
	void addDiagnosis(string patientName,string diagnose);
//Funtion to view Schedual
	void viewSchedual();

// 5. Overriding calculateSalary (Polymorphism)
	// Doctors might get a 20% bonus allowance on top of base salary
	double calculateSalary();
	//Overriding Display
	void display();


};
