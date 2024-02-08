#include "programmer.h"

//#########################################
//  Constructors
//#########################################

Programmer::Programmer() 
    : Employee(), department{0}, supervisor{"None"}, percentSalaryIncrease{0.0}, knowsCPP{false}, knowsJava{false} {}

Programmer::Programmer(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date, int department, string supervisor, float percentSalaryIncrease, bool knowsCPP, bool knowsJava)
    : Employee{name, id, phone, age, gender, jobTitle, salary, date}, department{department}, supervisor{supervisor}, percentSalaryIncrease{percentSalaryIncrease}, knowsCPP{knowsCPP}, knowsJava{knowsJava} {}

//#########################################
//  Member Functions
//#########################################

//--------------------------
//  Mutators
//--------------------------

void Programmer::changeDepartment(int d) {department = d;}
void Programmer::changeSupervisor(string s) {supervisor = s;}
void Programmer::changePercentSalaryIncrease(float psi) {percentSalaryIncrease = psi;}
void Programmer::changeKnowsCPP(bool cpp) {knowsCPP = cpp;}
void Programmer::changeKnowsJava(bool java) {knowsJava = java;}

//-------------------------------
//  Helper Functions
//-------------------------------

void Programmer::print() {  // Overrides the parent Employee print function
    Employee::print();  // Prints the members of the parent Employee class
    cout << "Department: " << department << endl;
	cout << "Supervisor: " << supervisor << endl;
	cout << "Percent Salary Increase: " << percentSalaryIncrease*100 << "%" << endl;
	cout << "Knows C++: ";
        if (knowsCPP)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    cout << "Knows Java: ";
        if (knowsJava)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
}

//#########################################
//  Friend Functions
//#########################################

bool operator==(const Programmer& lhs, const Employee& rhs){
	return lhs.getPhone() == rhs.getPhone();
}