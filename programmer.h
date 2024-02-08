#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "employee.h"

class Programmer : public Employee {
	//***************************************
	// Friend Functions                    
	//***************************************

	//-----------------------------------------------------
	// Equality == Operator Friend Function               -
	//-----------------------------------------------------
	// Compares the phone numbers of two Employee         -
	// objects together                                   -
	//-----------------------------------------------------
	// Pre-Condition: requires a valid Employee object as -
	// 	well as a valid Programmer object, both with  -
	//	populated phone number members.               -
	// Post-Condition:                                    -
	// 	returns true if both phone numbers are the    -
	//	same, otherwise the function returns false.   -
	//-----------------------------------------------------
	friend bool operator==(const Programmer& lhs, const Employee& rhs);

    public:
    /*
    ***************************************
    * Constructors                        *
    ***************************************
    */
        Programmer();
        Programmer(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date, int department, string supervisor, float percentSalaryIncrease, bool knowsCPP, bool knowsJava);

    /*
    ***************************************
    * Member Functions                    *
    ***************************************
    */

    //--------------------------
    //  Mutators
    //--------------------------

        void changeDepartment(int);
        void changeSupervisor(string);
        void changePercentSalaryIncrease(float);
        void changeKnowsCPP(bool);
        void changeKnowsJava(bool);

        void print();

    private:
    /*
    ***************************************
    * Private Data Members                *
    ***************************************
    */
        int department;
        string supervisor;
        float percentSalaryIncrease;
        bool knowsCPP;
        bool knowsJava;
};

#endif
