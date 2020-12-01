/*
 * plans.cpp
 *
 *  Created on: 21-Oct-2018
 *      Author: OMKAR
 */
//Part 6: Sperate Compilation .h and .cpp file

#include "Plans.h"
#include "Standard.h"

Plans::Plans(string plan, int amount): plan(plan), amount(amount) {}
Plans::Plans(int amount):amount(amount){}

void Plans::display(){

	cout << "You are Currently Subscribed for= " <<  plan << "  the rent of this plan is= " <<  amount << endl;

}

//*************Part 7.2:Friend Function Defination***********

void frnd (Plans x){
	cout<< "Your usage  of the plan is  " << x.amount << " channels and is a standard plan!" << endl;
}  //Accessing private class using friend function

//**********Part 10.2: Operator Overloading**************
Plans Plans::operator+ (Plans upgrade){
	return Plans(plan,10+upgrade.amount);    // operator "+" overloading
}
bool Plans::operator == (Plans x)
		{
	if (this->amount== x.amount) return true;
	else return false;                                     // operator "==" overloading
		}

bool Plans::equals (Plans x)
		{
	return(this->amount== x.amount);
		}

Plans::~Plans(){}
