#include<iostream>
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


//===========================================
//1.Employee Classs
// Inheritance: Derived from Person
//===========================================


class Employee:public Person {
	// Encapsulation: Data is private
	string employeeId;
	double salary;
	string dateOfJoining;
public:
	//Default Constructor
      Employee();

   //Perameterized Constructor
	  Employee(string n, int ag, string addr, string pho,   
		  string eid, double sa, string doj);

	  //Setters
	  void setEmployeeId(string eid) {
		  employeeId = eid;
	  }
	  void setSalary(double sa) {
		  salary = sa;
	  }
	  void setDateOfJoining(string doj) {
		  dateOfJoining = doj;
	  }

	  //Getters
	  string getEmployeeId()const {
		  return employeeId;
	  }
	  double getSalary()const {
		  return salary;
	  }
	  string getDateOfJoining()const {
		  return dateOfJoining;
	  }

	  //Virtual Function
	  // "virtual" means: "If a child class has a better version of this, use that one instead."
	  virtual double calculateSalary() {
		  return salary;
	  }


	  // Overriding displayInfo() from Person

	  void display(); 



};





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

#include<iostream>
#include<string>
using namespace std;





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