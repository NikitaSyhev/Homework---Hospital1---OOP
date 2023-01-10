//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "Hospital.h"

int main() {
	setlocale(LC_ALL, "Russian");
	
	Hospital hospital;

	

	hospital.patientRegister(1, "Nikita");
	hospital.patientRegister(2, "Vasily");
	hospital.patientRegister(3, "Iordan");
	

	
	hospital.patientDischarge(2);

	hospital.patientProcedures(1);












	return 0;
}