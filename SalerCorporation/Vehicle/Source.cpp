#include "Tank.h"
#include "SalerComp.h"

void main()
{
	SalerComp sc("Vasya corporation");
	//sc.addVehicle(new Bike("red", "Range Rover", 200, 4, 500000, 800, 4));
	//sc.addVehicle(new car("green", "Dodge", 150, 4, 200000, 500, 4));
	//sc.addVehicle(new Boat("yellow", "Katamaran", 100, 4, 400000, 600, 4));
	//sc.addVehicle(new Helicopter("pink", "Vertushka", 220, 4, 900000, 1000, 4));
	//sc.addVehicle(new Bus("orange", "Shkolniy", 90, 20, 700000, 400, 4));
	sc.readFromFile();
	sc.getInfo();
	//sc.saveToFile();
	system("pause");
}