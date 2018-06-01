#include "CrossRoad.h"

void main()
{
	//red green cntVehiclePerMinute averageVehicle
	CrossRoad r(20, 13, 40, 30);
	while (true)
	{
		r.redLightOn();
		r.greenLightOn();
	}
	system("pause");
}