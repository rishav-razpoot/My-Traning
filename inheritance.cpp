//============================================================================
// Name        : inheritance.cpp
// Author      : Rishav Kumar
// Description : Program for understanding Inheritance.
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Animal {

	public:
		int age;
		string color;

		void run(){

			cout << "Running\n\n";
	}

};


class Dog : public Animal {

	public:

		string petName;

		void bark(){

			cout << "Barking\n";

		}

		void getDetails(){
			cout << "age :" << age << endl << "Color :" << color << endl  << "Pet name :" << petName << endl;
		}


};

class Lion : public Animal {

	public:

		void roar(){

			cout << "Roaring\n";
		}

		void getDetails(){
			cout << "age :" << age << endl << "Color :" << color << endl;
		}

};

int main() {

	Dog dog1;

	dog1.age = 5;
	dog1.color = "White";
	dog1.petName = "Marco";

	dog1.getDetails();
	dog1.bark();
	dog1.run();


	Lion lion1;

	lion1.age = 30;
	lion1.color = "Brown";

	lion1.getDetails();
	lion1.roar();
	lion1.run();



	return 0;
}
