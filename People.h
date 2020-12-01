/*
 * people.hpp
 *
 *  Created on: 21-Oct-2018
 *      Author: OMKAR
 */

#ifndef PEOPLE_HPP_
#define PEOPLE_HPP_

#include <iostream>
#include<string>
using std:: string;
using namespace std;

class People{
protected:            //****** Part 1.1: Use of Access Specifier protected******
	string name;

public:               //****** Part 1.2: Use of Access Specifier public******
	int id;

//***** Part 2.1: Contructor overloading//Constructor declaration*****
	People(string name, int id);

//****** Part 2.2: Contructor overloading***********
		People(int id1);

//*****Part4.1:To demonstrate the use of function overriding*****

	virtual void display();


//****Part 10: Destructor ~always virtual //Destructor functionality could be different depending on the type
	virtual ~People();

	virtual void PeopleFunction();
};


#endif /* PEOPLE_HPP_ */
