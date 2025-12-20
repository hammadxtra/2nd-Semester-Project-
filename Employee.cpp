#include"Employee.h"	
    
    
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