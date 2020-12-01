//============================================================================
// Name        : Assignment.cpp
// Author      : Omkar
// Version     : 1
// Copyright   : Your copyright notice
// Description : Digital Entertaintment TV provider in C++, Ansi-style
//============================================================================
#include "people.h"
#include "Plans.h"   //Part 6: Sperate Compilation .h and .cpp file
#include "Customer.h" //Part 6: Sperate Compilation .h and .cpp file
#include "Distributor.h"
#include "Storage.h" //Part 6: Sperate Compilation .h and .cpp file
#include "Standard.h" //Part 6: Sperate Compilation .h and .cpp file
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

//*******Part 8.3:modified copy constructor**********
void v(Plans x){  //pass by value
	x.display();  // passing an object
}                   //Modified Copy constructor

void f(Plans& x){  //pass by reference //pointer to the current object
	x.display();
}


//Part 16.2: Struct and class difference
struct PlanName
{
	string Pname= "Premium" ;
};



//Part 19.1: Output Function of Vector Container
void output(People myPeople)
{
	myPeople.display();
}

// Part 20: Sorting container based on the ID of a person.

struct IDsort//Part 20.1 function used for Sorting the vector container using sort algorithm
{
	// ***********Part 17:Passing an object to a method by constant reference.***********
    inline bool operator() (const People& struct1, const People& struct2)
    {
        return (struct1.id < struct2.id);
    }
};


int main()
{
//********   Part 2: To display Overloading functionality *********************
	People p1("Albert", 1221);
	People p2(1221);
	p1.display();
	p2.display();
//********   Part 4: To display overriding functionality *********************

	Customer acustm("Joe",121,30,45000);
	acustm.display();

//***************Part 5: USe of Multiple Inheritance***********************
	     Newplan N1("New_plan",40,150,180);   // Demonstration of Multiple Inheritance

	     	N1.display();

//********Part 7: use of a friend functions that receives an object of a class ************

Plans Pfrnd("Standard",40);
	     		Pfrnd.display();
	     		frnd(Pfrnd);//Friend FUnction

//*******************Part 8:modified copy constructor**********************

Plans pl("Default",30), pl0("Standard",40);

	    v(pl); //pass by value
	    f(pl0); //pass by reference

	     Plans a("Standard",10);

	     Plans pl5(pl); //Copy Constructor
	     		       //pre5 is copy of pl
	                  //pl cannot be modified
	     			//passed by constant reference
	               // Everytime a copy is created an object is created.

	     Plans pl6=a+pl;
	     pl6.display();

//*********Part 10: Opertaor Overloading*****************************
Plans pl1("premium",50), pl2("premium",50);  //overloading using == operator

        if(pl2==pl1){
	     				cout<< "__The Objects are the same__" << endl;
	     			}

 Plans pl3("Default",30), pl4("Standard",40);  //overloading using == operator
 if(pl3.equals(pl4)){
	     			cout<< "__The Objects are the same__" << endl;
	     		    }
	     			cout<< "__The Objects are NOT the same__" << endl;

	     				pl3.display();
	     				pl4.display();

//****************Part 11:Operations on pointers to arrays of objects.**************************

	Customer my_array[5]={        //Array of Objects using pointer

	Customer("Alex",210,30,45641),
	Customer("Eric",211,40,45656),
	Customer("Vin",212,50,45662),
	Customer("Eva",213,30,45675),
	Customer("max",214,30,45676)

		};

	Customer *c=&my_array[0];     //display Alex
		my_array[4].display();
		c->display();
		(++c)->display();
		(c+1)->display();         //Display vin and c-> will point to ERic

//*****************************Part 12: Use of All Four Explicit Cast***********************************************

	// Dynamic Cast
	People *p = new People("kat", 19);
	Customer *mgr = new Customer("Dub",219,
			12,25000);

     Customer *newPtr = dynamic_cast<People*>(p);
     newPtr->PeopleFunction();

	// Constant Cast
	const int MYid = 10;
	int *n_id = const_cast<int*>(&MYid);
	*n_id += 2;
	People("Neville",*n_id);

	// Static Cast
	float age = 10.45f;
	int n_age = static_cast<int>(age);
	cout << "Age in Float: " << age << " and in Int: " << n_age << endl;

	// Re-interpret Cast
	int *w= new int(40);
	 char* rintp=reinterpret_cast<char*>(w);   //Demonstare re-interpret cast which typecast pointer to char datatype.
	 cout << *w << endl;
	 cout << *rintp << endl;
	 cout << w << endl;
	 cout << rintp << endl;


//********Part 13:USe of Dynamic Binding using Virtual and Non-Virtual methods******************************
	 Distributor *d1= new Distributor("jeff",310,45641);
	// using non virtual method
	//getpeopleType in user overrides getpeopleType in class People

	cout<< " d1 points to " << d1->getPeopleType() << endl;

	// keyword Virtual is not used for the Distributor class
	// when the keyword virtual is missing..
	//the method most closely associated to it static type is called

	cout<< " c points to -> " << c->getPeopleType() << endl;
	// using virtual method in the class Customer
	//getpeopleType in Customer overrides getpeopleType in class distributor


//******** Part 14:use of new and delete for the allocation of an object ******************

     	Customer *c1= new Customer("jeff",310,30,45641);  //Part 14.1
     	delete [] c1; //To destroy object of customer Delete is used //Part14.2



//****************************Part 16.1:Difference Between C++ class and struct  **********************

     	PlanName k1;
     				cout<< "This defines Struct fuction in c++ with member name  " << k1.Pname << endl;



//*************Part 18: Class template and usage *******************************************

     	Storage<int>can1;
     	Storage<float>can2;

     		for(int i=0; i<10; i++)
     		{
     			can1[i] = i*i;
     			can2[i] = (float)i/6;
     		}

     		for(int i=0; i<10; i++)
     		{
     			cout << "Integer value[ " << i << " ] is : " << can1[i] << endl;
     			cout << "Float value[ " << i << " ] is : " << can2[i] << endl;
     		}
//*********************Part 19:vector container to contain a number of objects *****************


     	string name;
     	int personid;
		vector<People> people;
			for(int i=0; i<3; i++)
			{
				cin >> name;
				cin >> personid;

				people.push_back(People(name,personid));
			}

			for_each(people.begin(), people.end(), output);

//****************************Part 20: Sorting container  **********************

			std::sort(people.begin(), people.end(), IDsort());


	return 0;
}
