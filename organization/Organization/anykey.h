#pragma once

#include "admin.h"


class anykey final
	:public admin {
public:
	anykey(string name = "none", date_ d = date_(1, 1, 2000), bool gender = 1) 
		:admin(name,d,gender,0,0){
	}
	double getCoef()const override {
		return 0.5;
	}
};
