#include"Patient.h"
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