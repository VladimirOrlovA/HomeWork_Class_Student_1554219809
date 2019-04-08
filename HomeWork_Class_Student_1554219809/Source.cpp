#include<iostream>
#include<locale.h>
#include<string>


using namespace std;

class Student
{
	string *name;
	string *group;
	int *course;

public:
	Student() // конструктор
	{
		name = new string[30];	// выделение памяти
		group = new string[15];
		course = new int;
	}

	void setAddStudent(string n = "Name", string g = "Groupe", int c = 0)	// сеттер
	{
		cout << "\n Введите имя студента -> ";
		cin >> n;
		*name = n;

		cout << " Введите название группы -> ";
		cin >> g;
		*group = g;

		cout << " Введите курс -> ";
		cin >> c;
		*course = c;
	}

	void printStudent()
	{
		cout << "\nИнформция о студенте:\n\n" << " Имя студента \t- " << *name << "\n Группа \t- " << *group << "\n Курс обучения \t- " << *course << "\n\n";
	}

	~Student() // деструктор
	{
		delete[] name, group;	// удаляем адреса указателей - освобождаем память
		delete course;
	}

};

int main()
{
	setlocale(LC_ALL, "RUS");

	Student first;
	first.setAddStudent();
	first.printStudent();


	system("pause");
}