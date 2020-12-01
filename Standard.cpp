/*
 * Standard.cpp
 *
 *  Created on: 03-Nov-2018
 *      Author: OMKAR
 */

#include "Standard.h"

#include "Plans.h"
Standard::Standard(string plan,int amount, int usage):Plans(plan,amount), usage(usage) {}


void Standard::display(){
	Plans::display();
	cout << "the Subscription is monthly and have=" << usage << "  channels in the package" << endl;
}

string Standard::getPlanType()
{return "Standard";}






//*****Part 5.1: Demonstration of Multiple Inheritance********

Newplan::Newplan(string plan,int amount,int usage,int newusage):Plans(plan,amount),Standard(plan,amount,usage), newusage(newusage) {}

void Newplan::display(){
	Standard::display();
	//Plans::display();
	cout << "the Subscription is monthly and have=" << newusage << "  channels in the package" << endl;
}

string Newplan::getPlanType()
{return "Newplan";}

