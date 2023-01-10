#pragma once
#include <iostream>
#include <string>
#include <map> //контейнер map
class Hospital
{
public:
	Hospital();
	
	void patientRegister(int num, const std::string& name);
	void patientDischarge(int num);
	void patientProcedures(int num);

private:
	std::map<int, std::string> _patients;
	int _proceduresCounter;
};

