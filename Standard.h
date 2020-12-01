/*
 * Standard.h
 *
 *  Created on: 03-Nov-2018
 *      Author: OMKAR
 */
//Part 6: Sperate Compilation .h and .cpp file
#include "Plans.h"
#ifndef STANDARD_H_
#define STANDARD_H_

class Standard: public Plans{
private:
	int usage;
public:
	Standard(string plan,int amount, int usage);

    //************Part3.1: Declaration of Abstract class********

	virtual string getPlanType()=0; //this will make entire class as abstract and no objects can be created
	virtual void display();

};





//*****Part 5.1: Demonstration of Multiple Inheritance********
class Newplan: public Standard, public Plans{
private:
	int newusage;
public:
	Newplan(std::string plan,int amount, int usage,int newusage);
	virtual string getPlanType();
	 virtual void display();
};



#endif /* STANDARD_H_ */
