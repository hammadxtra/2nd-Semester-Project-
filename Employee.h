#include"Person.h"
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