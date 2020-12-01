/*
 * Customer.h
 *
 *  Created on: 03-Nov-2018
 *      Author: OMKAR
 */

#include "people.h"

#ifndef CUSTOMER_H_
#define CUSTOMER_H_


class Customer: public People{
protected:       //*****Part 1.1: Use of Access Specifier protected*******


	//****************Part 15.1: Demonstrating Static state of a class***************
	static int nextCustomerid(); //Defining Static method and these cannot access non-static states and cannot be virtual

private:        //*****Part1.2: Use of Access Specifier private******
int phone;

void construct(); //Part 15.1 Private method for demonstration of Static state


public:         //*****Part1.3: Use of Access Specifier public******
int rent;
	Customer(string name, int id, int rent, int phone);
	Customer(string name,int id);


//*******************Part 13.2 Demonstrating Virtual Method ****************
//virtual is used for high performance processing  //virtual allows overidding to take place
	virtual string getPeopleType();
	virtual void display();
	virtual ~Customer();
};

#endif /* CUSTOMER_H_ */
