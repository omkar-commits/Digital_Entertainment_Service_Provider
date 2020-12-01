/*
 * Distributor.cpp
 *
 *  Created on: 04-Nov-2018
 *      Author: OMKAR
 */

#include "Distributor.h"

#include"People.h"

//Taking Class "user" as an example of Dynamic Non-virtual Method
Distributor::Distributor(string name, int id, int salary):People(name,id),salary(salary){

	cout<< "[A Distributor named "<< name << " id " << id << " was just created]" << endl;
}

string Distributor::getPeopleType()
{return "Distributor";}

void Distributor::display(){
	People::display(); //display function of child
		cout<<"has salary=EUR "<< salary << endl;
}
