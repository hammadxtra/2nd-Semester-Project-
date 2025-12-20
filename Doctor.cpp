#include"Doctor.h"
	//Default Constructor
	Doctor::Doctor():Employee(),specialization(" "),licenseNumber(" "),scheduale(" "){}

	//Paramterized Constructor
	Doctor::Doctor(string n, int ag, string addr, string pho,
		string eid, double sa, string doj,
		string spec, string ln, string sched) :Employee(n, ag, addr, pho, eid, sa, doj) {
		specialization = spec;
		licenseNumber = ln;
		scheduale = sched;
	}



//Funtion to add Diagnosis
	void Doctor::addDiagnosis(string patientName,string diagnose) {
		cout << "Dr." << getName() << " (" << specialization << ")" << " " << "Reports:" << endl;
		cout << "Patient:" << patientName << endl;
		cout << "Diagnosis:" << diagnose << endl;
		cout << "Saved to Medical Records." << endl;
	}


    
//Funtion to view Schedual
	void Doctor::viewSchedual() {
		cout << "Schedual for Dr." << getName() << " :" << endl;
		cout << "Availablity:" << " " << scheduale << endl;
	}



    	// 5. Overriding calculateSalary (Polymorphism)
	// Doctors might get a 20% bonus allowance on top of base salary

	double Doctor::calculateSalary() {
		double base = getSalary();
		return base + (base * 0.20);
	}


	void Doctor::display() {
		cout << "Dr.Name:" << getName() << endl;
		cout << "Dr.Age:" << getAge() << endl;
		cout << "Specialization:" << specialization << endl;
		cout << "License Number #:" << licenseNumber << endl;
		cout << "Schedual:" << scheduale << endl;
		cout << "Base Salary:$" << getSalary() << endl;
		cout << "Total Salary(Including Allowance):$" << calculateSalary() << endl;
	}