#include "Towns.h"


int main(int argc,char*argv[]) 
{
	
	setlocale(0, "");
	system("chcp 1251");
	system("cls");
	townsGame t("C:\\Users\\Dias\\source\\repos\\Project1\\Towns", atoi(argv[2]));
	t.players(atoi(argv[1]));
	//t.play();
	return 0;
}