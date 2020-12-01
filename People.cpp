/*
 * people.cpp
 *
 *  Created on: 27-Oct-2018
 *      Author: OMKAR
 */
//Part 6: Sperate Compilation .h and .cpp file
#include "people.h"
//#include "Customer.h"
//#include "user.h"
//#include "manager.h"


People::People(string name, int id): name(name), id(id) {
	cout<< "[A person named "<< name << " id " << id << " was just created]" << endl; //modifying the constructor
} //Constructor Definition


//******** Part 2.3: Contructor overloading//Constructor declaration*******

People::People(int id1) : id(id1)
{
	name = "test";
}


void People::display(){
	cout << "This is a member function of a parent class" << endl;
	cout << "Name: " << this->name << endl;
	cout << "ID: " << this->id << endl;

}

//*********Part9.2 Demonstrating Working of Destructor**********
People::~People(){
	cout<< "Using the destructor [This Person with "<< name << " id " << id << " was just Destroyed]" << endl;
}
