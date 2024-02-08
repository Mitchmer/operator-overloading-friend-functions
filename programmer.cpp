#include "programmer.h"

/*
***************************************
* Constructor Definitions             *
***************************************
*/

//---------------------------
// Default Constructor
//---------------------------
// Initializes each member
//   to a basic default value
//---------------------------

Programmer::Programmer() 
    : Employee(), department{0}, supervisor{"None"}, percentSalaryIncrease{0.0}, knowsCPP{false}, knowsJava{false} {}

Programmer::Programmer(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date, int department, string supervisor, float percentSalaryIncrease, bool knowsCPP, bool knowsJava)
    : Employee{name, id, phone, age, gender, jobTitle, salary, date}, department{department}, supervisor{supervisor}, percentSalaryIncrease{percentSalaryIncrease}, knowsCPP{knowsCPP}, knowsJava{knowsJava} {}


/*
***************************************
* Member Function Definitions         *
***************************************
*/

//--------------------------
//  Mutators
//--------------------------

void Programmer::changeDepartment(int d) {department = d;}
void Programmer::changeSupervisor(string s) {supervisor = s;}
void Programmer::changePercentSalaryIncrease(float psi) {percentSalaryIncrease = psi;}
void Programmer::changeKnowsCPP(bool cpp) {knowsCPP = cpp;}
void Programmer::changeKnowsJava(bool java) {knowsJava = java;}

//-------------------------------
//  Print
//-------------------------------
// Prints the values of each
//   member to the user
//-------------------------------
// Pre-Condition: each member
//   must be populated
// Post-Condition: members are
//   printed to the user
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