/*
 * plans.hpp
 *
 *  Created on: 21-Oct-2018
 *      Author: OMKAR
 */
//Part 6: Sperate Compilation .h and .cpp file
#ifndef PLANS_HPP_
#define PLANS_HPP_
#include <iostream>
#include<string>
using std:: string;
using namespace std;


class Plans{
protected:
  string plan;
	int amount;
private:
	//*****Part 7.1: Friend Function Declaration ,To access private or protected function of class*****
		friend void frnd(Plans x);
public:
	Plans(string plan, int amount);
	Plans(int amount);

	//Plans (string plan, int amount, int usage);

	//*********Part 10.1: Operator Overloading*************************

	Plans operator+ (Plans);// operator "+" overloading
		virtual bool operator == (Plans x);// operator == overloading
		virtual bool equals (Plans x);

 virtual void display();

  virtual ~Plans();

};


#endif /* PLANS_HPP_ */
