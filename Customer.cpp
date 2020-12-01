/*
 * Customer.cpp
 *
 *  Created on: 03-Nov-2018
 *      Author: OMKAR
 */

#include "Customer.h"
#include"People.h"

Customer::Customer(string name, int id, int phone , int rent):People(name,id),phone(phone),rent(rent){
	construct();
	cout<< "This demonsrtates working of constructor [A Customer named "<< name << " id " << id << " was just created]" << endl;
}

string Customer::getPeopleType()
{return "Customer";}


void Customer::display(){
	People::display(); //display function of child
	cout<<"has rent=EUR "<< rent << " has phone number is=" << phone << endl;

}

Customer::Customer(string name, int id):People(name,id){construct();}



//**********Part 15.2:Static states of a class*******************************

void Customer::construct(){   //Defining Static method and these cannot access non-static states and cannot be virtual

	int nextCustomerid=210;

	id=nextCustomerid++;
}


Customer::~Customer(){}
