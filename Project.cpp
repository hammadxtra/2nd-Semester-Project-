#include"Header.h"
	//Default Constructor
	Person::Person():name(" "),age(0),address(" "),phoneNumber(" "){}

	//Perametrized Constructor

	Person::Person(string n, int a, string addr, string phon) {
		name = n;
		age = a;
		address = addr;
		phoneNumber = phon;
	}


    
    
    //Default Constructor
      Employee::Employee():Person(),employeeId(" "),salary(0),dateOfJoining(" "){}

   //Perameterized Constructor
	  Employee::Employee(string n, int ag, string addr, string pho,   
		  string eid, double sa, string doj)
		  :Person(n,ag,addr,pho) {
		  employeeId = eid;
		  salary = sa;
		  dateOfJoining = doj;
	  }

      // Overriding displayInfo() from Person
	  void Employee::display() {
		  cout << "--------------Employee Whole Details.----------------" << endl;
		  cout << "Employee Name:" << getName() << endl;
		  cout << "Employee Age:" << getAge() << endl;
		  cout << "Employee Address:" << getAddress() << endl;
		  cout << "Employee Phone Number:" << getPhoneNumber() << endl;
		  cout << "Employee ID:" << employeeId << endl;
		  cout << "Employee Salary:" << salary << endl;
		  cout << "Employee Date_Of_Joining:" << dateOfJoining << endl;
	  }



	Patient::Patient() :Person(), patientId(" "), bloodGroup(" "), dateOfAdmission(" ") {
		historyCount = 0;
	}
	//Perametrized Constructor
	Patient::Patient(string n, int a, string addr, string phon,
		string pId, string bGroup, string doa)
		:Person(n, a, addr, phon) {
		patientId = pId;
		bloodGroup = bGroup;
		dateOfAdmission = doa;
		historyCount = 0;
	}

    	//Its just a simple function that display success after patient Register.
	void Patient::Register() {
		cout << "-------------Patient Register Successfully.---------------" << endl;
		cout << "Patient Name:" << getName() << endl;
		cout << "Patient ID:" << patientId << endl;
	}


	//Function to add Medical History
    	void Patient::addMedicalHistory(string record) {
		if (historyCount < 5) {
			medicalHistory[historyCount] = record;
			historyCount++;
		}
		else {
			cout << "Medical history is full. Cannot add more records." << endl;
		}
	}


    //Function to get Medical History

	void Patient:: getMedicalHistory() {
		cout << "-------------Medical History for " << " " << getName()<<"--------------" << endl;
		if (historyCount == 0) {
			cout << "No Record Found." << endl;
		}
		else {
			for(int i=0;i<historyCount;i++){
				cout << i + 1 << ". " << medicalHistory[i] << endl;
			}
		}
	}

// Overriding displayInfo() from Person

    	void Patient::display() {
		cout << "--------------Patient Whole Details.----------------" << endl;
		cout << "Patient Name:" << getName() << endl;
		cout << "Patient Age:" << getAge() << endl;
		cout << "Patient Address:" << getAddress() << endl;
		cout << "Patient Phone Number:" << getPhoneNumber() << endl;
		cout << "Patient ID:" << patientId << endl;
		cout << "Patient Blood group:" << bloodGroup << endl;
		cout << "Patient Date_Of_Admission:" << dateOfAdmission << endl;
	}




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




