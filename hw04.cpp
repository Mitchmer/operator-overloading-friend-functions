#include "programmer.h"
#include "architect.h"
#include <string>

void editEmployee(Employee& employee);
void editProgrammer(Programmer& programmer);
void editArchitect(Architect& architect);

int main() {
	cout << boolalpha;

	cout << endl << "Comparing Employee object's phone number with Programmer object's phone number using a friend function: " << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "Employee: " << endl;
	Employee newEmployee("John Smith", "080808-12", "801-421-5050", 25, "Male", "Janitor", 32000, Date(12, 23, 2021));
	newEmployee.print();
	cout << "Programmer: " << endl;
	Programmer newProgrammer("Emily Rodriguez", "5432809-2", "555-123-4567", 43, "Female", "UI/UX", 55000, Date(5, 12, 1988), 2, "Marcus Johnson", 0.11, true, false);
	newProgrammer.print();
	
	cout << "Employee and Programmer phone numbers are the same?: " << (newProgrammer == newEmployee) << endl;

	cout << endl << "Changing Programmer phone number to match Employee phone number. . . " << endl;
	newProgrammer.changePhone(newEmployee.getPhone());

	cout << endl << "Comparing Employee object's phone number with Programmer object's phone number using a friend function: " << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "Employee: " << endl;
	newEmployee.print();
	cout << endl << "Programmer: " << endl;
	newProgrammer.print();

	cout << "Employee and Programmer phone numbers are the same?: " << (newProgrammer == newEmployee) << endl << endl;

	cout << endl << "Comparing Employee object's phone number with Programmer object's phone number using a member function: " << endl;
	cout << "---------------------------------------------------------------------------------------------------------" << endl;
	Employee employeeOne("Benjamin Foster", "23451", "555-987-6543", 45, "Male", "Marketing Director", 110000, Date(9, 22, 2015));
	Employee employeeTwo("Emily Chen", "87654", "555-321-7890", 28, "Female", "Financial Analyst", 75000, Date(4, 10, 2019));
	cout << "Employee 1: " << endl;
	employeeOne.print();
	cout << endl << "Employee 2: " << endl;
	employeeTwo.print();
	cout << "Employee 1 and 2 phone numbers are the same?: " << (employeeOne.operator==(employeeTwo)) << endl << endl;

	cout << endl << "Changing Employee 2's phone number to match Employee 1's phone number. . . " << endl;
	employeeTwo.changePhone(employeeOne.getPhone());

	cout << endl << "Comparing Employee object's phone number with Programmer object's phone number using a member function: " << endl;
	cout << "---------------------------------------------------------------------------------------------------------" << endl;
	cout << "Employee 1: " << endl;
	employeeOne.print();
	cout << endl << "Employee 2: " << endl;
	employeeTwo.print();
	cout << "Employee 1 and 2 phone numbers are the same?: " << (employeeOne.operator==(employeeTwo)) << endl << endl;
	
	cout << endl << "Modifying Employee 1's age:" << endl;
	cout << "--------------------------------------" << endl;
	int years {4};
	employeeOne.addAge(years);
	employeeOne + 2;
	cout << endl;

	cout << "Employees (Overloaded <<): "<< endl;
	cout << employeeOne << employeeTwo << endl;

	cout << "Employee 1's salary: " << employeeOne.getSalary() << endl;
	cout << "Change Employee 1's salary to (Overloaded >>): ";
	cin >> employeeOne;
	cout << "Employee 1's updated salary: " << employeeOne.getSalary();

	return 0;
}

/*
**********************************************
*    Edit Employee                           *
**********************************************
* Allows user to update the various values   *
* for a given Employee object                *
*--------------------------------------------*
* Pre-Condition: Need a valid Employee or    *
*   Employee child object passed by reference*
*   as an argument                           *
* Post-Condition: Employee object will have  *
*   updated member values according to user  *
*   input.                                   *
**********************************************
*/
void editEmployee(Employee& employee) {
    string userStrInput {};
    int userIntInput {};

    cout << "Name: ";
    getline(cin, userStrInput);
    employee.changeName(userStrInput);
    cout << "ID: ";
    getline(cin, userStrInput);
    employee.changeID(userStrInput);
    cout << "Phone: ";
    getline(cin, userStrInput);
    employee.changePhone(userStrInput);
    cout << "Age: ";
    cin >> userIntInput;
    cin.ignore(25, '\n');
    employee.changeAge(userIntInput);
    cout << "Gender: ";
    getline(cin, userStrInput);
    employee.changeGender(userStrInput);
    cout << "Job Title: ";
    getline(cin, userStrInput);
    employee.changeJobTitle(userStrInput);
    cout << "Salary: ";
    cin >> userIntInput;
    employee.changeSalary(userIntInput);
    cout << "Hire Date: " << endl;
    int month, day, year {};
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    cout << "Year: ";
    cin >> year;
    cin.ignore(25, '\n');   
    Date userDate(month, day, year);
    employee.changeHireDate(userDate);
}


/*
**********************************************
*    Edit Programmer                         *
**********************************************
* Allows user to update the various values   *
* for a given Programmer object              *
*--------------------------------------------*
* Pre-Condition: Need a valid Programmer     *
*   object passed as an argument by          *
*   reference.                               *
* Post-Condition: Programmer object will have*
*   updated member values according to user  *
*   input.                                   *
**********************************************
*/
void editProgrammer(Programmer& programmer) {
    editEmployee(programmer); // usues the editEmployee function to update the parent Employee members
    string userStrInput {};
    int userIntInput {};
    float userFloatInput {};

    cout << "Department: ";
    cin >> userIntInput;
    cin.ignore(25, '\n');
    programmer.changeDepartment(userIntInput);
    cout << "Supervisor: ";
    getline(cin, userStrInput);
    programmer.changeSupervisor(userStrInput);
    cout << "Percent Salary Increase: ";
    cin >> userFloatInput;
    cin.ignore(25, '\n');
    programmer.changePercentSalaryIncrease(userFloatInput);
    cout << "Knows C++ (y/n): ";
    char discard {};
    cin.get(discard);
    if (discard == 'y' || discard == 'Y')  // if the user inputs anything other than y or Y, set the boolean to false.
        programmer.changeKnowsCPP(true);
    else
        programmer.changeKnowsCPP(false);
    cout << "Knows Java (y/n): ";
    cin.get(discard);
    if (discard == 'y' || discard == 'Y')  // if the user inputs anything other than y or Y, set the boolean to false.
        programmer.changeKnowsJava(true);
    else
        programmer.changeKnowsJava(false);
    cin.ignore(25, '\n');
}


/*
**********************************************
*    Edit Architect                          *
**********************************************
* Allows user to update the various values   *
* for a given Architect object               *
*--------------------------------------------*
* Pre-Condition: Need a valid Architect      *
*   object passed as an argument by          *
*   reference.                               *
* Post-Condition: Architect object will have *
*   updated member values according to user  *
*   input.                                   *
**********************************************
*/
void editArchitect(Architect& architect) {
    editEmployee(architect);  // usues the editEmployee function to update the parent Employee members
    string userStrInput {};
    int userIntInput {};
    float userFloatInput {};

    cout << "Enter data for architect: " << endl;
    cout << "Department: ";
    cin >> userIntInput;
    cin.ignore(25, '\n');
    architect.changeDepartment(userIntInput);
    cout << "Supervisor: ";
    getline(cin, userStrInput);
    architect.changeSupervisor(userStrInput);
    cout << "Percent Salary Increase: ";
    cin >> userFloatInput;
    cin.ignore(25, '\n');
    architect.changePercentSalaryIncrease(userFloatInput);
    cout << "Years of Design Experience: ";
    cin >> userIntInput;
    cin.ignore(25, '\n');
    architect.changeYearsExperienceDesign(userIntInput);
}