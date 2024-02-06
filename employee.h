#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Date Class                                            -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Stores a month, day and year                          -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= 
*/
class Date {
    public:
    /*
    ***************************************
    * Constructors                        *
    ***************************************
    */
        Date();
        Date(int month, int day, int year);

		void displayDate();
    private:
        int month;
        int day;
        int year;
};

/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Employee Class                                        -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Holds information of an employee, such as name, age,  -=
-=    and other relevant information                      -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/

class Employee {
    public:
    /*
    ***************************************
    * Constructors                        *
    ***************************************
    */
        Employee();
        Employee(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date);

    /*
    ***************************************
    * Member Functions                    *
    ***************************************
    */

    //--------------------------
    //  Mutators
    //--------------------------

		void changeName(string name);
		void changeID(string id);
		void changePhone(string phone);
		void changeAge(int age);
        void changeGender(string gender);
		void changeJobTitle(string jobTitle);
		void changeSalary(int salary);
		void changeHireDate(Date date);

		void print();
	
    private:
    /*
    ***************************************
    * Private Data Members                *
    ***************************************
    */
        string name;
        string id;
        string phone;
        int age;
        string gender;
        string jobTitle;
        int salary;
        Date hireDate;
};

#endif