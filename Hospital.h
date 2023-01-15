#pragma once
#include <iostream>
#include <string>
#include <map> 
#include <vector>
#include"Patient.h"
class Patient;



class Hospital
{
public:
	Hospital();
	Hospital(const std::vector<std::string>& deseases);
	
	void patientRegister(Patient& patient);
	void patientDischarge(int key);
	void patientProcedures(int key);
	void showPatients();


private:
	std::map<int, class Patient> _patients;
	int _proceduresCounter;
	int _idCounter;
	std::vector<std::string> _deseases;
};


