//Ётот проект создан с помощью классического шаблона
#include <iostream>
#include "Hospital.h"
#include <vector>
#include "Patient.h"
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	
	Hospital hospital({ "Desease1", "Desease2", "Desease3" });  //передали вектор в конструктор ( список болезней)

	Patient patient1("Alex", 30, "Desease1", {"Nothing"});

	Patient patient2("Valery", 70, "Desease4", { "Desease1", "Desease2"  });

	Patient patient3("Ivan", 50, "Desease2", { "Desease1", "Desease3" });
	Patient patient4("Oleg", 25, "Desease5", { "Nothing" });


	std::cout << "¬ больницу поступило 4 пациента. ѕроводим процедуру регистрации. \n\n" << std::endl;
	hospital.patientRegister(patient1);
	hospital.patientRegister(patient2);
	hospital.patientRegister(patient3);
	hospital.patientRegister(patient4);

	std::cout << "ќдного выписываем после осмотра: \n" << std::endl;
	hospital.patientDischarge(4);

	std::cout << "¬ больнице остались пациенты с номерами: ";

	hospital.showPatients();

	std::cout << "ѕроводим одного пациентов через процедуры. ≈сли можем вылечить - выписываем. ≈сли нет - переводим в другую больницу: " << std::endl;
	
	hospital.patientProcedures(1);

	
	

	return 0;
}