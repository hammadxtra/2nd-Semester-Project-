#include"Project.cpp"

int main() {

    //Creating Employee Object using Parameterized Constructor
    Employee emp1("John Doe", 30, "123 Main St", "555-1234",
        "E001", 50000.0, "2020-01-15");

    //Displaying Employee Details
    emp1.display();

    cout << endl;

    //Creating Patient Object using Parameterized Constructor
    Patient pat1("Jane Smith", 25, "456 Elm St", "555-5678",
        "P001", "O+", "2023-10-01");

    //Registering Patient
    pat1.Register();

    //Adding Medical History Records
    pat1.addMedicalHistory("2023-10-02: Flu vaccination");
    pat1.addMedicalHistory("2023-10-10: Annual physical exam");

    //Displaying Medical History
    pat1.getMedicalHistory();

    cout << endl;

    //Displaying Patient Details
    pat1.display();

    return 0;
}