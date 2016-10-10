//I affirm that all code given below was written solely by me, LJ Benson, 
//and that any help I receive adhered to the rules stated for this exam

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;


//namespace Exam1 // NAMESPACE
//{
	class Wheel
	{
	private:
		int _radius;
	public:
		Wheel(int radius) { _radius = radius; }
	};

	// STEP 1: Complete the implementation of the Vehicle base class 
	// as described in the UML diagram
	class Vehicle
	{
	protected:
		string _color;
		int _topspeed = 0;
		vector<Wheel> wheels;

	public:
		
		Vehicle(string color)
		{
			auto c = color;
		}

		virtual void Description() = 0;
	};

	// STEP 2:  Define the RaceCar, Sedan, and Pickup classes as described
	// in the UML diagram.   For this test, you do not need to separate
	// the class implementation into a cpp file.
	class RaceCar : public Vehicle {
	public:
		//top speed 250
		//wheel radius 305
		RaceCar(string color) : Vehicle(color)
		{
			_color = color;
		}

		void Description()
		{
			_topspeed = 250;
			Wheel(305); // wheel radius
			cout << "I am a " << this->_color << " race car that can race up to " << _topspeed << "mph. Vroom!" << endl;
		}


	};

	class Sedan : public Vehicle {
	public:
		//Top speed: 95mph
		//Wheel radius: 381mm
		Sedan(string color) : Vehicle(color)
		{
			_color = color;
		}

		void Description()
		{
			_topspeed = 95;
			Wheel(381);
			cout << "I am a " << this->_color << " sedan that can carry 5 people at " << _topspeed << "mph. Yea!" << endl;
		}



	};

	class Pickup : public Vehicle {
		//Top speed: 85mph
		//Wheel radius: 432mm
	public:
		Pickup(string color) : Vehicle(color)
		{
			_color = color;
		}

		void Description()
		{
			_topspeed = 85;
			Wheel(432);
			cout << "I am a " << this->_color << " pickup that can haul 600 sq. feet at " << _topspeed << " mph." << endl;
		}
	};



	int main()
	{
		Vehicle *Garage[3];

		// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements 
		// in the Garage array.  Remember the classes are defined in the namespace Exam1.
		

		Vehicle *Lightning_Mcqueen = new RaceCar("red");
		Vehicle *Doc_Hudson = new Sedan("black");
		Vehicle *Mator = new Pickup("brown");

		
		Garage[0] = Lightning_Mcqueen;
		Garage[1] = Doc_Hudson;
		Garage[2] = Mator;

		for (int i = 0; i < 3; ++i)
		{
			// The method Description() should display an output like 
			// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
			Garage[i]->Description();
		}
		return 0;
	}

