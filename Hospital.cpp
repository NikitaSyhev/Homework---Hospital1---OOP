#include "Hospital.h"


Hospital::Hospital() : _patients(), _proceduresCounter(0) {}

void Hospital::patientRegister(int num, const std::string& name)
{
	for (int i = 1; i <= num; i++) {
		_patients.emplace(num, name);
		auto it = _patients.find(num);
		std::cout << it->second << std::endl;
	}
	std::cout << "============" << std::endl;
}

void Hospital::patientDischarge(int num)
{
	auto it = _patients.find(num);
	std::cout << "Мы выписали пациента " << it->second<<std::endl;
		_patients.erase(num);
		std::cout << "============" << std::endl;
		
}

void Hospital::patientProcedures(int num)
{
	auto it = _patients.find(num);
	std::cout << "Мы проводим через процедуру  пациента " << it->second << std::endl;
	patientDischarge(num);
	_proceduresCounter++;

}







