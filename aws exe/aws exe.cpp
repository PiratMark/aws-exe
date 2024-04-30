#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>

class Student
{
public:
	static const int size = 5;
	std::string name;
	int qroup;
	int ses[size];
};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	Student stud[3];
	std::cout << "Заполните данные студентов\n\n";

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Введите имя студента №" << i + 1 << ": ";
		std::getline(std::cin, stud[i].name, '\n');
		std::cout << "Введите группу  студента №" << i + 1 << ": ";
		std::cin >> stud[i].qroup;

		for (int j = 0; j < stud[i].size; j++)
		{
		std::cout << "Введите оценку №" << j + 1 << " у студента № "
		<< i + 1 << ": ";
		std::cin >> stud[i].ses[j];
		}
		std::cout << "\n\n\n";
		std::cin.ignore(32000, '\n');

		
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << stud[i].name << " ";
		std::cout << "Группа № " << stud[i].qroup << "\n";
		std::cout << "\n";
	}


	




	return 0;
}
