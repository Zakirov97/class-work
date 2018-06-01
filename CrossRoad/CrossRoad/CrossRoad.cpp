#include "CrossRoad.h"

Vehicle * CrossRoad::randomVehicle()
{
	srand(time(NULL));
	Vehicle* v = nullptr;
	vector<string> color = { "Red", "Green", "Yellow", "Black", "Purple", "Pink", "Orange"
	};
	vector<string> marks = {
		"Acura", "Alfa Romeo", "Aston Martin", "Audi", "Bentley", "BMW", "Bugatti", "Buick"
	};
	int randColor = rand() % color.size();
	int randMarks = rand() % marks.size();
	int randVehicleType = rand() % 4;
	switch (randVehicleType)
	{
	case 0:
		v = new Bus(color[randColor], marks[randMarks], 100, 100, 300, 1);
		break;
	case 1:
		v = new Car(color[randColor], marks[randMarks], 300, 2, 700, 4);
		break;
	case 2:
		v = new Tank(marks[randMarks], 80, 6, 1000);
		break;
	case 3:
		v = new Bicycle(color[randColor], marks[randMarks], 200, 1, 0, "Жесткое");
	}
	return v;
}

CrossRoad::CrossRoad(int durationRed, int durationGreen, 
	int cntVehiclePerMinute,int averageVehicle)
{
	srand(time(0));
	setlocale(0, "");
	this->durationRed = durationRed;
	this->durationGreen = durationGreen;
	this->cntVehiclePerMinute = cntVehiclePerMinute;
	this->averageVehicle = averageVehicle;
}

void CrossRoad::setDurRed(int durationRed)
{
	this->durationRed = durationRed;
}

void CrossRoad::setDurGreen(int durationGreen)
{
	this->durationGreen = durationGreen;
}

void CrossRoad::setOneVCT(int cntVehiclePerMinute)
{
	this->cntVehiclePerMinute = cntVehiclePerMinute;
}

void CrossRoad::setAverageVehicle(int averageVehicle)
{
	this->averageVehicle = averageVehicle;
}

int CrossRoad::getDurRed() const
{
	return this->durationRed;
}

int CrossRoad::getDurGreen() const
{
	return this->durationGreen;
}

int CrossRoad::getOneVCT() const
{
	return this->cntVehiclePerMinute;
}

int CrossRoad::getAverageVehicle() const
{
	return averageVehicle;
}

void CrossRoad::redLightOn()
{
	int min = averageVehicle / 2;
	int max = averageVehicle + averageVehicle /2;
	int Rand = rand() % (min + 1) + max;
	Rand = Rand * durationRed / 60;
	double cntSec = (double)Rand / durationRed;
	double ost = 0.0;
	for (int i = 0; i < durationRed; i++)
	{
		ost += cntSec;
		system("cls");
		cout << "Красный - " << durationRed - i << " сек\n"
			<< "-------------------\n";
		while (ost>=1)
		{
			traffic.push_back(auto_ptr<Vehicle>(randomVehicle()));
			ost -= 1;
		}
		print();
		Sleep(1000);
	}
}

void CrossRoad::greenLightOn()
{
	double cntSec = (double)averageVehicle / 60;
	double ost = 0.0;
	for (int i = 0; i < durationGreen; i++)
	{
		system("cls");
		cout << "Зеленый - " << durationGreen - i << " сек\n"
			<<cntSec<< "-------------------\n";
		ost += cntSec;
		if (traffic.size() > 0)
		{
			while (ost >= 1)
			{
				traffic.erase(traffic.begin());
				if (traffic.size() - 1 < traffic.size())
				{
					traffic.erase(traffic.begin());
				}
				if (traffic.size() - 1 < traffic.size())
				{
					traffic.erase(traffic.begin());
				}
				ost -= 1;
			}
		}
		print();
		Sleep(1000);
	}
}

void CrossRoad::print() const
{
	//4
	for (size_t i = 0; i < traffic.size();)
	{
		string type = typeid(*traffic[i]).name();
		type = type.substr(6);
		cout << type << ' ' << traffic[i]->getColor() << ' ' << traffic[i]->getModel() << '\t' << '\t';
		++i;
		string type2, type3;
		if (i < traffic.size())
		{
			string type2 = typeid(*traffic[i]).name();
			type2 = type2.substr(6);
			cout << type2 << ' ' << traffic[i]->getColor() << ' ' << traffic[i]->getModel() << '\t' << '\t';
			++i;

		}
		if (i < traffic.size())
		{
			string type3 = typeid(*traffic[i]).name();
			type3 = type3.substr(6);
			cout << type3 << ' ' << traffic[i]->getColor() << ' ' << traffic[i]->getModel() << endl;
			++i;
		}
	}
}
