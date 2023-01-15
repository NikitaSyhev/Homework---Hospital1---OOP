//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include "Hospital.h"
#include <vector>
#include "Patient.h"
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	
	Hospital hospital({ "Desease1", "Desease2", "Desease3" });  //�������� ������ � ����������� ( ������ ��������)

	Patient patient1("Alex", 30, "Desease1", {"Nothing"});

	Patient patient2("Valery", 70, "Desease4", { "Desease1", "Desease2"  });

	Patient patient3("Ivan", 50, "Desease2", { "Desease1", "Desease3" });
	Patient patient4("Oleg", 25, "Desease5", { "Nothing" });


	std::cout << "� �������� ��������� 4 ��������. �������� ��������� �����������. \n\n" << std::endl;
	hospital.patientRegister(patient1);
	hospital.patientRegister(patient2);
	hospital.patientRegister(patient3);
	hospital.patientRegister(patient4);

	std::cout << "������ ���������� ����� �������: \n" << std::endl;
	hospital.patientDischarge(4);

	std::cout << "� �������� �������� �������� � ��������: ";

	hospital.showPatients();

	std::cout << "�������� ������ ��������� ����� ���������. ���� ����� �������� - ����������. ���� ��� - ��������� � ������ ��������: " << std::endl;
	
	hospital.patientProcedures(1);

	
	

	return 0;
}