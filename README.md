# Digital_Entertainment_Service_Provider
Object Oriented Programming concepts Implementation using  c++
#Introduction:


 The Application “Digital Entertainment Service Provider” is implemented with the 20 points mentioned in the assignment question. This Application has two parts “People” and “Plans” of which “People” consist of the members such as Distributor and Customer,” Plans” consist of Members such as Standard and NewPlan.  
“People” is a parent class with variables “Name” and “Id” which are then used in derived/child classes Distributor and Customer. 
“Plans” is a parent class with variables “plan” which states type of plan (standard , newplan) and “amount” which shows the cost/amount of subscription which are used in derived/child classes Standard and Newplan. 

#Implementation:


1. The use of all access specifiers are used in the “People” class and its Derived customer class. All three are used in derived class i.e. Customer class. (Customer.h) 1.1 Protected 1.2 Private 1.3 Public 
 
2. Overloading using methods or constructor is demonstrated in the “People” class. The Constructor which is Overloaded has different argument (id1) .(People.h)(People.cpp) 2.1 First time Constructor “People” declared. (People.h) 2.2 Second time Constructor “People” declared. (People.h) 2.3 Overloaded Constructor definition. (People.cpp) 
 
3. Abstract class declared in the “Standard” class with the method getPlantype() which returns the string defining type of plan and it is used in its derived class Newplan. Defining method with assignment =0 in standard class means no implementation will be 
present for that method, no objects can be created the entire class will become abstract. (Standard.h) 3.1 Using =0 operator to make method as abstract. (Standard.h) 
 
4. Overriding is demonstrated in the “People” class and its derived classes. The display() function have same prototype in People class and its derived classes. Overriding occurs when one class is inherited from other. Overriding is shown in the Int main() function.(People.h)(People.cpp) 4.1 display function declared in People class. (People.h)(People.cpp) 4.2 It is implemented in the int main() function. 
 
5. Multiple Inheritance is demonstrated in the “Plans” class and its derived classes. The class “Newplan” is inherited from base class “Plans” and its derived class “Standard”. Multiple Inheritance is shown in (Standard.h)(Standard.cpp). 5.1 Declaring Multiple Inherited class Newplan(Standard.h). 5.2 Defining Multiple Inherited class Newplan (Standard.cpp). 5.3 It is implemented in the int main() function. 
 
6. Separate Compilation is used to break a program into pieces and compile those independently. This allows to compile and test one class at a time and built into libraries for future. Program is broken into .cpp and .h files for each class. 6.1  It is demonstrated in the int main() function. 
 
7. The use of friend function is demonstrated in the “Plans” Class that receives an object of the class and further modified. The function friend allows to access private and protected members and prevents states from having public.(Plans.h) (Plans.cpp). 7.1 Friend function is declared in the class (Plans.h). 7.2 Friend function is declared in (Plans.cpp). 7.3 It is demonstrated in the int main () function. 
 
8. Demonstration of effect of pass-by-value and pass-by-reference is done in the class “Plans”. Its effect is implemented in the main() function. Functions are defined in main function for  Pass-by-value and Pass-by-refrence. (Plans.h). 8.1 Effect of Pass-by-value is demonstrated in main function Int main(). 8.2 Effect of Pass-by-value is demonstrated in main function. 8.3 Functions to demonstrate above points are declared above main function. 
 
9. Working of destructor is demonstrated in the “People” class. It is declared using (~) on a function. Its effect is defined in the 
“People.cpp” file. Destructor function could be different depending on the type of function. (People.h)(People.cpp). 9.1 Destructor is declared in the Plans Class. (People.h) 9.2 Its effect is defined in the (People.cpp). 
 
10. Operator overloading is demonstrated in the class “Plans”. The Operator is overloaded using the key word “operator “ followed by “+”, “==”, “=” and “-”. (Plans.h)(Plans.cpp) 10.1 Operator “+” is overloaded. (Plans.h)(Plans.cpp) 10.2 Operator “==” is overloaded. (Plans.h) (Plans.cpp) 
 
11. Pointer to array of objects is demonstrated in the main function using 5 objects of class Customer. Pointer “c” is used to demonstrate the operations. Pointer to array of objects has similar form as pointer to object. 11.1 It is demonstrated in the int main() function. 
 
12. The use all Explicit Style Cast are demonstrated in the main function. There are four cast (Dynamic, Constant, Static, Reinterpret). 12.1 Dynamic Casting is demonstrated in the int main() function. 12.2 Constant Casting is demonstrated in the int main() function. 12.3 Static Casting is demonstrated in the int main() function. 12.4 Re-interpret casting is demonstrated in the int main() function. 
 
13. Dynamic Binding is demonstrated in the class “Distributor” for non-virtual and class “Customer” for virtual. It can be demonstrated by simply stating keyword Virtual/Non-virtual with the function. Its effect is implemented in main function Int main(). (Distributor.h)(Customer.h) (Distributor.h)(Distributor.cpp). 13.1 Keyword Virtual is not used to demonstrate Non Virtual Functionality (Distributor.h)(Distributor.cpp). 13.2 Keyword Virtual is used to demonstrate Virtual Functionality (Customer.h)(Customer.cpp). 13.3 The effect is shown in the int main(). 
 
14. The operation of new and delete is demonstrated on object using pointers in the main function Int main(). 14.1 New object is created using keyword “new” to the pointer. Int main(). 14.2 The above object is deleted using the keyword “delete”. Int main(). 
 
15. Static state is demonstrated in the class “Customer”. Defining Static state method to the class cannot access non-static states and cannot be virtual. (Customer.h) (Customer.cpp) 
15.1 Static method is declared in the header file. (Customer.h) 15.2 Private method construct(); is declared. (Customer.h) 15.3 The private method Construct() is called to demonstrate its impact. (Customer.cpp) 
 
16. The demonstration of struct is done in the main function int main(). The function for struct is defined above main function. The difference between struct and class is accessibility of member variables and method. The demonstration of class can be observed in the base class “People” and its derived class. 16.1 The struct is called in the main function (Int main()). 16.2 The struct is defined above Int main() function. 
 
17. Passing an Object by constant reference is demonstrated in the main program. The function  to pass object by constant reference is defined above the main program. Using constant reference function body cannot make directly change to object.  Similar property of Pass by value. Demonstrated  above (Int main()) 17.1 Passing the object by constant reference. 
 
18.  Template is declared in the class “Storage”. It is a separate class declared as template and can be used in the main function by calling it. Its functionality can be adapted by one to more than one type or class. (Storage.h) 18.1 It is declared in class Storage (Storage.h) 18.2 It is used in the main function. (int main()) 
 
19. The use of vector container is demonstrated in the main function Int main(). It is created using the keyword “Vector” to allocate some extra storage and contain number of objects.(Int main()). 19.1 The output function is defined above main function to display the objects in the container.  
 
20. The Sort algorithm is used on the class people and it is demonstrated in the main function by passing the objects by constant reference of variable ID sort. (Int main()) 20.1 The sort algorithm is  built in function called using keyword “sort”. 20.2 The Struct of ID sort to pass objects is defined above the main function.
