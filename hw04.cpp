#include "programmer.h"
#include "architect.h"
#include <string>

void editEmployee(Employee& employee);
void editProgrammer(Programmer& programmer);
void editArchitect(Architect& architect);

int main() {

    cout << "============================" << endl;
    cout << "          EMPLOYEE" << endl;
    cout << "============================" << endl;
    Employee defaultEmployee;     // initialization of default constructor for Employee
    Employee newEmployee("John Smith", "080808-12", "801-421-5050", 25, "Male", "Janitor", 32000, Date(12, 23, 2021));

    cout << "Default employee:" << endl;
    cout << "--------------------------" << endl;
    defaultEmployee.print();
    cout << "--------------------------" << endl;
    cout << "New employee before changes:" << endl;
    cout << "--------------------------" << endl;
    newEmployee.print();
    cout << "--------------------------" << endl;
    cout << "Enter new data for employee: " << endl;
    editEmployee(newEmployee);

    cout << "--------------------------" << endl;
    cout << "Employee after changes: " << endl;
    cout << "--------------------------" << endl;
    newEmployee.print();
    cout << endl;
    
    cout << "============================" << endl;
    cout << "         PROGRAMMER" << endl;
    cout << "============================" << endl;
    Programmer defaultProgrammer;       // initialization of default constructor for Programmer
    Programmer newProgrammer("Emily Rodriguez", "5432809-2", "555-123-4567", 43, "Female", "UI/UX", 55000, Date(5, 12, 1988), 2, "Marcus Johnson", 0.11, true, false);

    cout << "Default programmer:" << endl;
    cout << "--------------------------" << endl;
    defaultProgrammer.print();
    cout << "--------------------------" << endl;
    cout << "New programmer before changes:" << endl;
    cout << "--------------------------" << endl;
    newProgrammer.print();
    cout << "--------------------------" << endl;
    cout << "Enter new data for programmer: " << endl;
    editProgrammer(newProgrammer);

    cout << "--------------------------" << endl;
    cout << "Programmer after changes: " << endl;
    cout << "--------------------------" << endl;
    newProgrammer.print();
    cout << endl;

    cout << "============================" << endl;
    cout << "         Architect" << endl;
    cout << "============================" << endl;
    Architect defaultArchitect;       // initialization of default constructor for Architect
    Architect newArchitect("Aisha Patel", "4219-23", "555-789-0123", 33, "Female", "Lead Software Design", 120000, Date(3, 8, 1990), 1, "Jim Cortez", .7, 8);
        
    cout << "Default architect:" << endl;
    cout << "--------------------------" << endl;
    defaultArchitect.print();
    cout << "--------------------------" << endl;
    cout << "New architect before changes:" << endl;
    cout << "--------------------------" << endl;
    newArchitect.print();
    cout << "--------------------------" << endl;
    cout << "Enter new data for architect: " << endl;
    
    editArchitect(newArchitect);

    cout << "--------------------------" << endl;
    cout << "Architect after changes: " << endl;
    cout << "--------------------------" << endl;
    newArchitect.print();
    
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