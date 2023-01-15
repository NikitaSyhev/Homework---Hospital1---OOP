#pragma once
#include <iostream>
#include <string>
#include <map> 
#include <vector>
#include "Hospital.h"





class Patient
{
public:
	Patient(const std::string& name, int age, const std::string& disease, const std::vector<std::string>& deseaseHistory);


	const std::string& getName();
	void setName(std::string& name);

	int getAge();
	void setAge(int age);


	std::string& getDesease();
	void setDesease(std::string& desease);




private:
	std::string _name;
	int _age;
	std::string _desease;
	std::vector<std::string> _deseaseHistory;

};
