/*
##################################################################################
|
|	Assignment: HW04 Operator Overloading & Friend Functions
|	Programmer: Mitch Merrell
|	Course: CS1C
|	Date Last Modified: 15 Feb 2024
|
##################################################################################
*/

#include "programmer.h"
#include <string>

/*
##################################################################################
|
|	Operator Overloading & Friend Functions
|	
##################################################################################
|	
|	This program explores Inheritance through classes by using the Employee
|	and derived Programmer classes. Instances of the classes will be
|	compared using overloaded equality operator friend and member functions.
|	The phone number member data will be modified in between comparisons
|	to showcase the overloaded equality (==) operator, which will be comparing
|	phone numbers between classes, both base (Employee) and derived (Programmer),
|	with the results displayed to the user.
|	
|	The driver program runs as follows:
|		1. Create both an Employee and Programmer object with different member
|			data, and call their print functions
|		2. Using the friend function overloaded == operator, determine the equality of
|			the objects' phone numebrs
|		3. Change the Programmer's number to match the Employee's,
|			and compare again, calling their print functions
|		4. Create two new Employee objects with different member data
|		5. Repeat steps 2-3 again, instead using the member function overloaded ==
|			operator of the Employee class to compare the new Employee
|			objects
|		6. Showcase the overloaded + operator using both the overloaded member
|			function as well as an addAge mutator, printing the
|			results.
|		7. Print the two Employee objects to the user using the overloaded
|			<< operator
|		8. Update one of the Employee object's salary member to a given value
|			using the overloaded >> operator, and print the results
|
##################################################################################
*/

int main() {
	cout << boolalpha; // Prints "false" or "true" instead of 1 or 0

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

	cout << endl << "Comparing Employee object 1's phone number with Employee object 2's phone number using a member function: " << endl;
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

	cout << endl << "Comparing Employee object 1's phone number with Employee object 2's phone number using a member function: " << endl;
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
