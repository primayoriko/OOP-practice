
class Vehicle {
	protected:
		float fuel;
	public:    
		Vehicle();
		~Vehicle();
		void addFuel(float fuel);
		void drive();
};

class Car : public Vehicle{
	public:
		Car();
		~Car();
		void openDoor();
		void drive();
};
