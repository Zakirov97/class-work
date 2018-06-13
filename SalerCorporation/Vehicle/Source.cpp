#include "Tank.h"
#include "SalerComp.h"
#
void main()
{
	SalerComp sc("Vasya corporation");
	sc.addVehicle(new Bike("red", "Range Rover", 200, 4, 500000, 800, 4));
	sc.addVehicle(new car("green", "Dodge", 150, 4, 200000, 500, 4));
	sc.addVehicle(new Boat("yellow", "Katamaran", 100, 4, 400000, 600, 4));
	sc.addVehicle(new Helicopter("pink", "Vertushka", 220, 4, 900000, 1000, 4));
	sc.addVehicle(new Bus("orange", "Shkolniy", 90, 20, 700000, 400, 4));
	while (1)
	{
		std::cout << "Hello!\n" << "Choose what you want do" << std::endl;
		std::cout << "1.Buy Vehicle" << std::endl;
		std::cout << "2.Rent Vehicle" << std::endl;
		std::cout << "3.Return Vehicle" << std::endl;
		std::cout << "9.Exit" << std::endl;
		int choose;
		std::cin >> choose;

		if (choose == 0)
		{
			std::cout << "Wrong number!" << std::endl;
			return;
		}
		else if (choose == 1)
		{
			sc.buyVehicle();
		}
		else if (choose == 2)
		{
			sc.rentVehicle();
		}
		else if (choose == 3)
		{
			sc.returnVehicle();
		}
		else if (choose == 9)
		{
			return;
		}
	}
















	//sc.saveToFile();
	//sc.readFromFile();
	sc.getInfo();
	system("pause");
}