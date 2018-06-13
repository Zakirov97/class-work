#include "SalerComp.h"




void SalerComp::setName(std::string name)
{
	this->name = name;
}


void SalerComp::addVehicle(Vehicle * vehc)
{
	veh.push_back(std::auto_ptr<Vehicle>(vehc));
}

void SalerComp::buyVehicle()
{
	std::cout << "What kind of vehicle you want to buy?" << std::endl;
	getInfo();
	std::string vehName;
	std::cout << "Enter model the vehicle - ";
	std::cin >> vehName;
	for (int i = 0; i < veh.size(); i++)
		if (vehName == (*veh[i]).getModel()) {
			*(veh).erase(veh.begin() + i);
			break;
		}
	std::cout << "Thanks you for your purchase" << std::endl;
	system("pause");
}

void SalerComp::rentVehicle()
{
	std::cout << "What kind of vehicle you want to rent?" << std::endl;
	getInfo();
	std::string vehName;
	std::cout << "Enter model the vehicle - ";
	std::cin >> vehName;
	for (int i = 0; i < veh.size(); i++)
		if (vehName == (*veh[i]).getModel()) {
			rentVeh.push_back(std::auto_ptr<Vehicle>(veh[i]));
			*(veh).erase(veh.begin() + i);
			break;
		}
	std::cout << "Thanks you for your purchase" << std::endl;
	system("pause");
}

void SalerComp::returnVehicle()
{
	std::cout << "What the vehicle you want return?" << std::endl;
	getInfoAboutRentCar();
	std::string vehName;
	std::cout << "Enter model the vehicle - ";
	std::cin >> vehName;
	for (int i = 0; i < veh.size(); i++)
		if (vehName == (*veh[i]).getModel()) {
			veh.push_back(std::auto_ptr<Vehicle>(rentVeh[i]));
			*(rentVeh).erase(rentVeh.begin() + i);
			break;
		}
}

void SalerComp::getInfoAboutRentCar() const
{
	for (int i = 0; i < rentVeh.size(); i++)
	{
		std::string res = typeid(*rentVeh[i]).name();
		std::cout << res.substr(6) << std::endl;
		rentVeh[i]->info();
	}
}

void SalerComp::getInfo() const
{
	std:: cout << "Corporation: " << name << "\n--------------\n";
	for (int i = 0; i < veh.size(); i++)
	{
		std::string res = typeid(*veh[i]).name();
		std::cout << res.substr(6) << std::endl;
		veh[i]->info();
	}
}

SalerComp::SalerComp(std::string name)
{
	setName(name);
}

void SalerComp::saveToFile() const
{
	std::fstream f("organization.csv", std::ios::out);
	f << this->name << ";" << std::endl;
	for (int i = 0; i < veh.size(); i++)
	{
		f << veh[i]->codeInfo();
		if (i != veh.size() - 1)
			f << std::endl;
	}
	
}

void SalerComp::readFromFile()
{
	std::fstream f("organization.csv", std::ios::in);
	std::string str;
	char mark = ';';
	std::getline(f, str, mark);
	this->name = str;
	std::vector<std::string> s;
	while (!f.eof())
	{
		
		for (int i = 0; i < 8; i++)
		{
			std::string s1;
			std::getline(f, s1, ';');
			s.push_back(s1);
		}
		//bike;Marka;color;max_speed;number_of_seats;cost;engine_power;numberOfWheels;
		if (s[0] == "\nBike")
			addVehicle(new Bike(s[1], s[2], stoi(s[3]), stoi(s[4]), stoi(s[5]), stoi(s[6]), stoi(s[7])));
		else if (s[0] == "\nBoat")
			addVehicle(new Boat(s[1], s[2], stoi(s[3]), stoi(s[4]), stoi(s[5]), stoi(s[6]), stoi(s[7])));
		else if (s[0] == "\nBus")
			addVehicle(new Bus(s[1], s[2], stoi(s[3]), stoi(s[4]), stoi(s[5]), stoi(s[6]), stoi(s[7])));
		else if (s[0] == "\ncar")
			addVehicle(new car(s[1], s[2], stoi(s[3]), stoi(s[4]), stoi(s[5]), stoi(s[6]), stoi(s[7])));
		else if (s[0] == "\nHelicopter")
			addVehicle(new Helicopter(s[1], s[2], stoi(s[3]), stoi(s[4]), stoi(s[5]), stoi(s[6]), stoi(s[7])));
		else if (s[0] == "\nPlane")
			addVehicle(new Plane(s[1], s[2], stoi(s[3]), stoi(s[4]), stoi(s[5]), stoi(s[6]), stoi(s[7])));
		else if (s[0] == "\nScooter")
			addVehicle(new Scooter(s[1], s[2], stoi(s[3]), stoi(s[4]), stoi(s[5]), stoi(s[6]), stoi(s[7])));

	}
	f.close();

}
