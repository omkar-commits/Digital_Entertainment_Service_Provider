/*
 * Distributor.h
 *
 *  Created on: 04-Nov-2018
 *      Author: OMKAR
 */

#ifndef DISTRIBUTOR_H_
#define DISTRIBUTOR_H_

#include "people.h"

class Distributor: public People{
private:
int salary;

public:

//*******************Part 13.1 Demonstrating Non-Virtual Method ****************

Distributor(string name, int id,int salary);
    Distributor(string name,int id);
	string getPeopleType();
	 void display();   // Key word virtual is not used in non-virtualmetod

};

#endif /* DISTRIBUTOR_H_ */
