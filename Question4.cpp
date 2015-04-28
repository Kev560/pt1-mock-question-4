///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3
// Name: Kevin Singh
// Student No:213520763
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>
using namespace std;

// Animal Class - Abstract base class
class Animal
{
public:
	Animal(){};
	~Animal(){};

	virtual void name() = 0;
	virtual void does() = 0;
};

//Bird Derived from animal
class Bird : public Animal
{
public:
	Bird(){};
	~Bird(){};

	virtual void name();
	virtual void does();
};

//Dog Derived from animal
class Dog : public Animal
{
public:
	Dog(){};
	~Dog(){};

	virtual void name();
	virtual void does();
};

void Bird::name()
{
	cout << "Bird";
}

void Bird::does()
{
	cout << "Chirps";
}

void Dog::name()
{
	cout << "Dog";
}

void Dog::does()
{
	cout << "Barks";
}

int main(int argc, char **argv)
{
	Animal *ptrAnimal[2];

	ptrAnimal[0] = new Bird;
	ptrAnimal[1] = new Dog;

	for (int i = 0; i < 2; i++)
	{
		cout << "A ";
		ptrAnimal[i]->name();
		cout << " ";
		ptrAnimal[i]->does();
		cout << "." << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		delete ptrAnimal[i];
	}

	return 0;

}