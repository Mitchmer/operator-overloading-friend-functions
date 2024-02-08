#include "programmer.h"
#include <string>

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
