#include "architect.h"

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

Architect::Architect()
    : Employee(), department{0}, supervisor{"None"}, percentSalaryIncrease{0.0}, yearsExperienceDesign{0} {}



Architect::Architect(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date, int department, string supervisor, float percentSalaryIncrease, int yearsExperienceDesign)
    : Employee{name, id, phone, age, gender, jobTitle, salary, date}, department{department}, supervisor{supervisor}, percentSalaryIncrease{percentSalaryIncrease}, yearsExperienceDesign{yearsExperienceDesign} {}


/*
***************************************
* Member Function Definitions         *
***************************************
*/

//--------------------------
//  Mutators
//--------------------------

void Architect::changeDepartment(int d) {department = d;}
void Architect::changeSupervisor(string s) {supervisor = s;}
void Architect::changePercentSalaryIncrease(float psi) {percentSalaryIncrease = psi;}
void Architect::changeYearsExperienceDesign(bool years) {yearsExperienceDesign = years;}

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

void Architect::print() { // Overrides the parent Employee print function
    Employee::print();  // Prints the parent Employee class members
    cout << "Department: " << department << endl;
	cout << "Supervisor: " << supervisor << endl;
	cout << "Percent Salary Increase: " << percentSalaryIncrease*100 << "%" << endl;
	cout << "Years of Design Experience: " << yearsExperienceDesign << endl;
}