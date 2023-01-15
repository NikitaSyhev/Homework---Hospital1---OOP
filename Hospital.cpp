#include "Hospital.h"
#include <vector>
#include "Patient.h"


Hospital::Hospital() : _patients(), _proceduresCounter(0), _idCounter(0){}

Hospital::Hospital(const std::vector<std::string>& deseases) : _deseases(deseases), _patients(), _proceduresCounter(0), _idCounter(0) {}

void Hospital::patientRegister(Patient& patient)
{
	_idCounter++;
	_patients.insert({ _idCounter, patient });
	for (int i = _idCounter; i <= _idCounter; i++) {
		auto it = _patients.find(_idCounter);
		std::cout << "Мы зарегистрировали пациента " << patient.getName() << std::endl;
	}
}




void Hospital::patientDischarge(int key)
{
	auto it = _patients.find(key);
	std::cout << "Мы выписали пациента c номером " << key << std::endl;
	_patients.erase(key);
	std::cout << "============" << std::endl;

}


void Hospital::patientProcedures(int key)
{
	auto it = _patients.find(key);

	for (size_t i = 0; i < _deseases.size(); i++) {
		if (it->second.getDesease() == _deseases[i]) {
			_patients.erase(key);
			std::cout << "Пациент " << key << " выписывается. Так как мы можем вылечить такую болезнь. " << std::endl;
			
		}
		else
		{
			std::cout << "Пациент " << key << " направляется в другую больницу." << std::endl;
			_patients.erase(key);
		}
	}
}

void Hospital::showPatients()
{
	for (const auto& [key, value] : _patients) {
		std::cout << key << std::endl;
	}
}
